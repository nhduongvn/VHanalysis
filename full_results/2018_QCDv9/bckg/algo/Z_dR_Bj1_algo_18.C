#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(-1.310117,-445187,7.029799,3264705);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2893716);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0);
   st_stack_119->SetMaximum(2893716);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_119->GetXaxis()->SetRange(1,30);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetTitleSize(0.037);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,545.7768);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,1676096);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,1909867);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,1569426);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,1079216);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,840514.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,694563.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,488112.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,348156.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,301046.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,250730.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,249377.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,130076);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,174044.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,156327.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,109769.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,104869.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,58289.09);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,86323.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,10063.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,52132.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,30338.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,27585.65);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,5425.768);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,504.8984);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,4211.728);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,2283.479);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,1891.678);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,32.47468);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,379.2959);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,116320);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,124844.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,121581.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,96511.09);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,85268.58);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,86548.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,64411.23);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,51590.48);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,51022.98);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,45604.72);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,50200.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,32191.72);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,44547.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,39031.84);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,32000.44);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,38144.45);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,22751.58);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,37802.73);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,3441.547);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,30746.62);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,21902.79);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,21818.75);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,2757.263);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,378.3643);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,2679.728);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,1913.156);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,1876.085);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,32.47468);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(38074);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,4.243855);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,6844.416);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,19277.02);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,25551.26);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,25868.92);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,22353.24);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,17754.26);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,13541.98);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,10278.63);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,7831.792);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,6154.58);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,4931.686);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,4040.17);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,3426.969);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,3008.982);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,2619.049);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,1633.865);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,1045.48);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,675.3222);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,444.9347);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,271.1148);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,176.3949);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,112.4311);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,70.73669);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,41.5651);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,25.40738);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,15.10595);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,9.6472);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,6.312111);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,3.661657);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,6.480455);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.5483574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,22.19585);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,37.30683);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,42.97047);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,43.21351);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,40.10806);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,35.66132);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,31.06752);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,26.9856);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,23.49171);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,20.77922);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,18.58404);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,16.79072);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,15.45463);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,14.47945);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,13.49436);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,10.67163);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,8.535074);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,6.855303);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,5.56781);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.3324);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,3.509825);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,2.803353);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,2.209049);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,1.69913);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,1.342672);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,1.022012);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.8124804);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.6635205);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.513041);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.6752195);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2572457);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
