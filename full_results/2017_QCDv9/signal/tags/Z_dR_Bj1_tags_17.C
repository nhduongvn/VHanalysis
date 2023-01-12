#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(-1.310117,-0.5137114,7.029799,3.767217);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_17->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.339124);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(0);
   st_stack_54->SetMaximum(3.339124);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetTitleOffset(1);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetTitleSize(0.037);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetTitleOffset(1);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.3412219);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,1.149045);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,1.648975);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,1.461699);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,1.228399);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.9173314);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.7364044);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.5269101);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.4586657);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.3174157);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.2491713);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.182514);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.201559);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.1745786);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.122205);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.1285534);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.08570224);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.04285112);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.03015449);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.02539326);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.01110955);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.01269663);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.003174157);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.02327114);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.04270392);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.05115713);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.04816463);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.04415388);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.03815596);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.03418672);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.02891795);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.02698034);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.02244468);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.01988604);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.01701952);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.01788547);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.01664542);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.01392656);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.01428371);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.0116626);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.008246702);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.006917915);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.006348314);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.004199015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.004488936);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.002244468);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,0.001587079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(6340);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.1227514);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.4448633);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.577108);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.4607591);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.3093069);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.2035553);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.1362187);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.0940505);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.07793386);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.0593887);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.05718094);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.04724603);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.04238896);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.03951887);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.03399948);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.03135017);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.02031138);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.01192189);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.008610257);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.005960947);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.003973965);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.002428534);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.001324655);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.0004415516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0006623275);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.005205817);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.009910351);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01128767);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.01008586);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.008263624);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.006703737);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.005483958);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.004556762);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.004148001);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.003620993);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.003553051);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.003229672);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.003059159);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.002953779);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.002739756);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.002630848);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.002117607);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001622364);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001378745);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.001147185);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0009366725);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0007322306);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0005407881);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0003122242);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0003823949);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(12653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
