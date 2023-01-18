#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Wed Jan 18 11:43:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-543309.7,7.264125,3984271);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3531513);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(0);
   st_stack_88->SetMaximum(3531513);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_88->GetXaxis()->SetRange(1,31);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Events/0.2");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,27.31799);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,1145152);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,1546678);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,1515760);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,1432236);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,1437395);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,1393242);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,1723631);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,1605573);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,1765483);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,1768388);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,2099740);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,2326026);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,1869005);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,1728992);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,1259732);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,816978.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,464707.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,239465.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,189329.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,121865.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,52848.89);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,14815.52);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,10482.12);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,3665.449);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,826.6548);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,28.73188);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,27.31799);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,73207.79);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,103910.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,122874.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,112128.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,114243.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,102314.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,121921.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,109266.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,120486.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,109805.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,135970.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,158845.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,124961.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,113421.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,116446.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,92474.97);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,67770.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,39494.22);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,40656.43);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,38785.67);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,23919.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,3392.072);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,3736.799);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,1672.193);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,480.5602);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,18.00014);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(113207);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,5.202116);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,8544.805);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,18740.29);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,27136.29);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,35303.44);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,38765.58);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,38141.31);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,36331.2);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,34843.82);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,34021.52);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,32942.52);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,31163.53);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,28315.63);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,25583.87);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,22438.58);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,13324.63);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,8226.507);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,5046.854);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,2995.528);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,1687.826);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,884.1874);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,461.3808);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,214.4562);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,83.57969);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,29.0137);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,8.270038);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,1.312236);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,0.09353442);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.6281038);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,26.0163);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,38.27466);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,46.01302);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,52.84823);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,55.51233);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,55.82147);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,54.08562);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,53.75);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,53.80511);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,52.04005);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,50.61553);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,48.3934);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,45.64184);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,42.41707);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,33.16545);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,25.961);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,20.54665);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,15.09262);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,11.63516);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,8.033399);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,5.860467);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,4.068738);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,2.476062);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,1.440785);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,0.7825369);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,0.2783522);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,0.06617299);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(6476475);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
