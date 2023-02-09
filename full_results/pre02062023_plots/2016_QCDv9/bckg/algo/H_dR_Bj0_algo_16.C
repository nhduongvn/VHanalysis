#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-321344.4,7.029799,2356526);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_16->SetBottomMargin(0.12);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2088739);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(0);
   st_stack_105->SetMaximum(2088739);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Events/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,528659.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,1368649);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1161597);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,609313);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,496719.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,293394.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,203842.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,230992.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,114887.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,62965.18);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,155958.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,62676.65);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,28132.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,6727.339);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,23572.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,3313.771);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,4735.91);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,2202.647);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,2062.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1558.601);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1442.682);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,10.12707);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,34.25518);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,24.1281);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,36134.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,78209.69);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,85431.97);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,61717.62);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,56792.15);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,44998.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,37992.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,49479.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,33118.18);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,23551.89);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,46095.59);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,28297.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,16577.27);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2273.768);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,16393.98);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,2030.516);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,2477.043);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,1485.231);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,1484.306);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1419.522);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1418.759);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,10.12707);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,26.16721);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,24.1281);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(33722);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,6539.744);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,23843.25);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,23378.44);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,15555.64);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,9339.99);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,5629.281);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,3476.014);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,2230.435);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1464.779);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,987.8067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,651.4052);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,443.0538);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,299.9341);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,205.3141);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,136.3);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,98.04286);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,65.55134);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,42.54901);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,31.64855);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,21.84446);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,13.10989);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,8.107058);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,6.278157);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,4.110162);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.971414);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.902825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.547069);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.537903);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.7596731);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.357997);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.5404239);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,19.7732);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,38.09653);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,38.14435);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,31.4064);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,24.47081);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,19.04673);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,14.96355);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,11.97518);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,9.684538);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.965983);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.455115);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.322375);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.38437);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.624484);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,2.951897);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.51319);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.053526);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.648541);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.425748);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.179093);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.9124636);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7217375);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.6329653);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.5137692);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5038136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3545767);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.311177);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.1832805);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2235749);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1504497);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1936006);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1587706);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
