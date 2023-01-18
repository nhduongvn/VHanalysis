#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(-1.310117,-0.1229992,7.029799,0.9019943);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetLogy();
   Z_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(76.14237);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(-3.268843e+09);
   st_stack_118->SetMaximum(-47.48807);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_118->GetXaxis()->SetRange(1,30);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetTitleSize(0.037);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.1301404);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.4919944);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.5792837);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.484059);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.3094803);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.2094944);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.1095084);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.06189606);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.03808989);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.03808989);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.02063202);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.01745786);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.01110955);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.007935393);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.01745786);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.004761236);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.01437161);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.0279434);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.03032109);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.02771714);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.02216235);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.01823414);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.01318326);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.009911302);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.007775065);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.007775065);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.005722293);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.005263744);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.004199015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.003548816);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.005263744);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.002748901);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(1599);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.02870086);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.155647);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1821401);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.1178943);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.05894714);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.02936318);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.01324655);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.01148034);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.008168705);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.005960947);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.005740171);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.00529862);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.003090861);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.003311637);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.003090861);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.00264931);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.001324655);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.0006623275);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,0.0004415516);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,0.0002207758);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.002517232);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.005862003);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.006341303);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.005101785);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.003607507);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.002546111);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.001710122);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.001592037);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.001342927);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.001147185);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.00112574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.001081576);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0008260675);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0008550611);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0008260675);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0007647899);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0005407881);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0003823949);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,0.0003122242);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,0.0002207758);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
