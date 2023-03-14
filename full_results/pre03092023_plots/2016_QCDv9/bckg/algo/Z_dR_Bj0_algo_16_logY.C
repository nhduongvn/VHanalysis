#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.7673674,7.029799,8.750182);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLogy();
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.747949e+07);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(2.369947);
   st_stack_113->SetMaximum(6.286763e+07);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,62924.72);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,268045.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,151192.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,95995.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,78215.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,57634.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,25507.13);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,21529.27);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,14135.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,11451.14);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,10791.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,5557.895);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,4389.77);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,1629.409);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,1415.085);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2526.947);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,658.9846);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,1869.403);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,69.9242);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,597.5351);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,1819.638);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,335.7269);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,8.271799);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,25.40889);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,8.271799);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,4237.236);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,24640.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,9589.987);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,7614.551);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,8270.099);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,22087.32);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,4464.752);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,4052.337);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3011.468);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,3726.441);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,3319.862);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2626.514);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,1963.688);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,670.103);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,601.1168);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1844.505);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,424.0851);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1795.093);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,37.31748);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,422.5211);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,1794.862);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,299.9398);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,8.271799);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,24.95376);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,8.271799);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(21684);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,972.0237);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,6749.12);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,9869.838);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,8811.982);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,6265.241);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,3979.719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,2482.86);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,1611.51);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1058.365);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,707.9795);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,487.7423);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,336.0243);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,233.281);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,157.4079);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,114.5357);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,79.05884);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,53.60934);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,36.52189);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,25.28396);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,17.93657);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,11.03382);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,9.903941);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,5.9798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,3.815999);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,2.941467);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,1.88936);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.148241);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.045056);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.4569025);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.3628617);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.7537889);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,7.96019);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,20.96695);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,25.33427);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,23.92456);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,20.15144);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,16.04889);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,12.66499);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,10.18679);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,8.249076);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,6.750883);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.594818);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,4.636947);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,3.864746);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,3.177641);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,2.716187);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.254856);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,1.8555);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.53156);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.283613);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.069615);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.8373203);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.7981068);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.6198092);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.4947181);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4308297);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.3433297);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.2731626);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.2568395);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.165342);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1510552);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2197149);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(695813);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
