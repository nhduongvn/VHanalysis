#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-0.7078511,7.029799,8.431588);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLogy();
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.474398e+07);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(2.448396);
   st_stack_111->SetMaximum(3.293397e+07);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_111->GetXaxis()->SetRange(1,30);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Events/0.2");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,1958.381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,87221.26);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,130703.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,101256.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,138993.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,93318.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,120278.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,83478.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,98963.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,100279);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,119518.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,53467.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,82159.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,65064.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,48056.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,50517.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,27212.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,25976.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,12843.64);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,9566.665);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,5305.603);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,1538.334);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,5710.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,1072.373);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,478.8274);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,103.1247);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,25.5795);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,11.63026);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,1958.381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,8440.111);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,10387.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,8622.619);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,24749.88);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,8842.831);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,24230.07);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,8297.492);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,9476.999);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,23954.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,32775.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,5439.543);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,23140.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,7233.677);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,4847.873);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,4629.662);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,3040.738);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,4051.675);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,1758.104);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2352.529);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1178.26);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,535.9173);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2844.967);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,528.8632);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,371.4201);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,47.55553);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,18.08744);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,8.223833);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(24188);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,1.659476);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,2393.732);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,7116.291);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,8671.299);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,8446.115);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,7638.505);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,6898.268);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,6077.788);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,5325.374);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,4680.817);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,4125.965);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,3728.707);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,3420.115);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,3189.671);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,3029.79);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2779.543);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1731.386);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1132.13);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,760.1519);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,490.9387);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,299.2969);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,184.1546);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,105.3589);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,55.55984);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,27.62291);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,14.56043);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,6.313304);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.722394);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.25367);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.6603965);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.067936);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3239623);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,12.47495);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,21.61562);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,23.97768);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,23.78013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,22.65185);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,21.52145);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,20.16991);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,18.84572);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,17.6408);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,16.52995);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,15.70673);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,15.0076);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,14.49746);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,14.11375);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,13.51282);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,10.65872);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,8.605655);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,7.044108);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.657345);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.41145);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.465135);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.630171);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.900849);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.347344);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.9731058);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.65037);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4258197);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2848844);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2106176);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2625055);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1270077);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
