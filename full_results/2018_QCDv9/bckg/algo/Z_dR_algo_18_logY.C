#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.7415607,7.029799,8.611705);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLogy();
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.096266e+07);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(2.403428);
   st_stack_83->SetMaximum(4.746553e+07);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Events/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,407.4529);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,207469.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,187795);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,144022.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,135057.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,110533.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,99201.79);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,93043.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,142639.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,96873.78);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,95458.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,63716.91);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,86985.73);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,52947.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,52650.48);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,28963.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,14297.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,12005.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,2990.763);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,4254.559);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,3489.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,718.37);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1121.603);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,90.47158);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,5.989828);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,10.41666);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,391.8156);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,31192.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,12174.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,11637.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,10890.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,9575.983);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,9600.986);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,10211.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,34197.31);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,25083.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,33795.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,8458.216);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,31221.38);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,7895.959);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,8030.986);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,5219.704);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3020.208);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,3339.337);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,911.7146);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2542.744);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2193.671);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,342.1422);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,647.4528);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,47.10984);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,5.989828);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,9.616853);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(24188);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.431869);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,2157.221);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,4532.397);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,5962.945);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,7288.64);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,8109.316);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,8476.161);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,8455.438);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,8020.487);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,7485.064);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,6759.962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,6086.528);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,5461.986);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,4976.321);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,4328.7);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1976.591);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,966.8529);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,480.3544);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,251.5465);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,120.1314);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,53.12411);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,23.03035);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,10.75477);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,4.696128);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,1.094239);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.1305086);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.08790641);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4598495);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,13.81565);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,20.4609);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,23.09309);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,26.15786);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,26.93355);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,27.31761);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,27.4774);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,26.40028);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,25.57766);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,24.41361);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,22.81681);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,21.9372);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,21.76489);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,18.86246);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,13.14565);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,9.424067);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,6.100607);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.49849);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.218894);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.129606);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.357289);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.9094051);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.5955033);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.2798601);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.0832843);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.08790641);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1270077);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
