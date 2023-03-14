#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-0.3510306,7.029799,6.583209);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLogy();
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(403834);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(3.027458);
   st_stack_114->SetMaximum(775862.2);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Event/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,75239.38);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,325754.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,245509.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,167614.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,79450.02);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,64004.63);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,50872.04);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,38835.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,21331.26);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,10843.93);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,5831.526);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,8996.511);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,8042.569);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,5116.885);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,2646.137);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,602.5163);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,306.1602);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,111.2789);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,1252.815);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,272.4807);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,64.08887);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,12.75549);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,29.97199);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,1448.702);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,21.36296);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3806.696);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,18571.53);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,23128.61);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,17376.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,6141.809);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,15287.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,15277.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,15047.69);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3699.894);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,2622.551);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,1848.675);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2559.636);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2741.351);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2135.89);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1316.171);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,357.4726);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,253.1023);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,45.25318);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1189.427);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,252.0248);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,37.00173);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,9.383701);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,23.0324);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1215.235);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,21.36296);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,1332.292);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,9427.465);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,13934.99);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,12497.93);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,8852.185);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,5597.807);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,3459.145);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,2205.114);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1464.349);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,999.0533);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,682.2526);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,467.7328);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,327.5946);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,232.209);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,152.7735);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,111.4738);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,76.77635);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,55.26153);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,34.15486);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,26.56502);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,16.06531);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,12.72511);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.323339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,5.869251);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,3.495144);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,2.533589);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.560211);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.084002);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.6018826);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.556636);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.906243);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,9.089684);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,24.1798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,29.36546);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,27.79981);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,23.38713);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,18.56822);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,14.56816);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,11.61601);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,9.457746);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,7.810655);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,6.433939);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.32412);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,4.449428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,3.750244);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.034073);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.607166);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.152056);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.832486);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.427299);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.264447);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.9931166);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.8832666);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.7102367);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.5921964);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4596465);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.3929605);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3077813);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.2557386);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.1861701);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1805881);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2323795);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
