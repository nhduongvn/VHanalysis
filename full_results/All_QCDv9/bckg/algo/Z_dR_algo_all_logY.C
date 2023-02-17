#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.8176981,7.029799,9.021686);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLogy();
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.673681e+07);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",30,0,6);
   st_stack_84->SetMinimum(2.306896);
   st_stack_84->SetMaximum(1.090805e+08);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_84->GetXaxis()->SetRange(1,30);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Events/0.2");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,767.6972);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,461467.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,457207.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,354798);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,334465.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,287129.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,214376.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,209234.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,243358.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,185082.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,186769);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,137759);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,190824.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,126247.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,109336.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,82926.04);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,40290.12);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,27434.86);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,31102.57);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,14631.76);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,6614.168);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,1691.721);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,1237.731);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,157.1388);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,13.53301);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,24.46984);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,505.9679);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,33327.65);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,17775.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,28384.63);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,30269.69);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,23232.44);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,12260.03);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,13246.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,35010.35);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,26329.83);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,39412.25);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,10400.45);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,37184.78);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,10819.15);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,10041.32);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,23758.77);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,5759.457);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,4266.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,20684.13);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,4268.762);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,2801.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,538.5165);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,648.708);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,57.66948);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,8.039834);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,13.26476);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(70650);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,5.385473);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,4831.215);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,10160.2);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,13412.27);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,16264.02);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,18103.85);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,18950);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,18854.84);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,17940.23);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,16700.65);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,15122.28);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,13601.25);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,12249.25);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,11148.3);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,9703.568);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,4428.993);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,2183.031);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,1084.733);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,553.662);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,268.6122);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,119.6411);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,50.60053);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,21.46813);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,9.108288);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,2.303234);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,0.5685755);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,0.1402525);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.6419393);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,19.70649);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,28.8723);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,32.87931);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,36.63844);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,38.16171);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,38.84608);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,38.84287);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,37.59177);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,36.30159);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,34.54802);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,32.48815);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,31.02521);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,30.16821);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,27.09794);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,18.5761);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,13.18368);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,8.909655);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,6.39483);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,4.53755);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,3.015395);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,1.920423);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,1.234227);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,0.8149763);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,0.385574);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,0.1800416);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,0.1023115);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(2980897);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
