#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-0.892414,7.264125,9.428118);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLogy();
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.035858e+08);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(2.218451);
   st_stack_87->SetMaximum(2.489228e+08);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,476012.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,601231.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,682103.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,538858.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,625112.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,527318.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,729583.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,712880.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,813607.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,691173.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,942528.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,1023221);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,848141.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,673640.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,514229.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,328195.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,238816.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,88245.22);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,98682.16);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,68339.49);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,35528.46);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,4915.529);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,3183.811);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,1053.246);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,482.3116);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,5.433096);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,49721.69);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,64359.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,90903.93);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,69849.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,81796.19);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,65981.88);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,83376.89);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,76011.47);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,88458.7);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,68269.38);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,98314.79);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,114892.4);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,95022.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,72658.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,83928.49);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,61787.47);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,54565.01);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,24557.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,33621.82);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,33441.44);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,23588.15);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,1895.079);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2106.803);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,613.8741);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,409.2963);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,5.433096);
   VbbHcc_algo_H_dR_stack_1->SetEntries(38074);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,2.305926);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,3810.15);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,8370.382);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,12179.3);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,15915.39);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,17440.82);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,17179.44);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,16311.35);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,15611.58);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,15321.28);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,14761.95);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,13923.18);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,12637.01);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,11396.23);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,10030.17);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,5938.84);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,3681.066);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,2241.393);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,1318.129);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,736.2301);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,385.3475);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,203.0974);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,93.49051);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,35.30446);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,13.0161);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,3.67839);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.4704075);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.04526368);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.4464375);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,18.97726);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,27.77063);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,33.40356);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,38.57726);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,40.36779);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,40.83846);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,39.01156);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,39.11084);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,39.61624);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,37.66199);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,36.61723);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,35.17536);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,33.04027);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,30.5908);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,24.30896);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,19.08377);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,15.28944);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,10.79702);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,8.546599);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,5.697597);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,4.226834);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.977999);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.768258);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,1.043136);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.5833265);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1803865);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.04526368);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2572457);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
