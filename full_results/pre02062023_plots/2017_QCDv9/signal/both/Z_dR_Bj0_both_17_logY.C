#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(-1.310117,0.494021,7.029799,2.762162);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetLogy();
   Z_dR_Bj0_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_17->SetBottomMargin(0.12);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(266.9028);
   
   TH1F *st_stack_178 = new TH1F("st_stack_178","",30,0,6);
   st_stack_178->SetMinimum(5.83711);
   st_stack_178->SetMaximum(343.0423);
   st_stack_178->SetDirectory(0);
   st_stack_178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_178->SetLineColor(ci);
   st_stack_178->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_178->GetXaxis()->SetRange(1,30);
   st_stack_178->GetXaxis()->SetLabelFont(42);
   st_stack_178->GetXaxis()->SetTitleOffset(1);
   st_stack_178->GetXaxis()->SetTitleFont(42);
   st_stack_178->GetYaxis()->SetTitle("Events/0.2");
   st_stack_178->GetYaxis()->SetLabelFont(42);
   st_stack_178->GetYaxis()->SetTitleSize(0.037);
   st_stack_178->GetYaxis()->SetTitleFont(42);
   st_stack_178->GetZaxis()->SetLabelFont(42);
   st_stack_178->GetZaxis()->SetTitleOffset(1);
   st_stack_178->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_178);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.444382);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,1.544227);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,1.996545);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,1.688652);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,1.358539);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,1.031601);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.7300561);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.5761095);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.4078792);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.3475702);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.3142416);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.2348876);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.1904494);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.182514);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.1888623);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.1555337);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.1063343);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.06507022);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.04285112);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.03015449);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.01269663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.007935393);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.004761236);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.0265569);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.04950566);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.05629097);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.05176894);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.04643392);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.04046272);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.03403904);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.03023791);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.0254428);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.02348662);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.02233217);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.01930764);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01738557);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01701952);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.01731298);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.01571128);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.0129908);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.01016226);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.008246702);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.006917915);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.004488936);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.003548816);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.002748901);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,0.001587079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.1711013);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.6117698);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.6724831);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.4954209);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.3470596);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.2053215);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.1485821);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.1035439);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.0885311);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.06866128);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.06468732);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.05232387);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.05099921);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.04614215);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.04614215);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.03642801);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.02207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.01258422);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.01015569);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.00794793);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.004857068);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.00264931);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001103879);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.001766207);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.006146139);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.0116217);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01218475);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01045834);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.00875342);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.006732758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.00572742);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.004781211);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.004421032);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.003893424);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.003779073);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.003398801);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.003355502);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.003191719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.003191719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.002835917);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001666821);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001497374);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001324655);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.00103553);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0007647899);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0004936697);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0006244483);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
