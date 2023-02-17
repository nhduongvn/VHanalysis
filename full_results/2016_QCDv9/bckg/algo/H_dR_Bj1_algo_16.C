#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-19318.06,7.029799,141665.8);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(125567.4);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(0);
   st_stack_109->SetMaximum(125567.4);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,56176.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,76601.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,71222.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,59396.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,78209.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,80078.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,50615.94);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,47670.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,42098.69);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,34456.05);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,38825.07);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,35270.88);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,33883.17);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,31068.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,27624.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,20587.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,12288.47);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,5741.975);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,4069.346);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,2741.838);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,4128.129);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,2708.313);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,1988.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,457.0081);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,53.04361);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,41.49313);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,330.2744);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,6439.799);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,7111.708);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,7812.843);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,6649.665);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,22371.59);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,22461.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,6048.371);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,5967.329);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,4535.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,3955.808);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,5499.216);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,4234.038);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,4200.858);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,3373.824);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,2836.917);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,3517.175);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,1550.768);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,1012.008);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,813.037);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,684.3629);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1940.437);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1845.307);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1795.815);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,304.3817);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,28.95681);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,27.55584);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,299.8433);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(21684);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.6281574);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,1318.988);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,3824.81);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,4606.073);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,4402.255);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,3997.672);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,3632.792);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,3227.228);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,2846.336);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,2488.544);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,2221.187);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,2015.891);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,1865.264);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,1747.048);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,1665.673);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,1526.875);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,953.2926);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,646.8995);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,419.6802);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,276.1726);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,180.1586);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,104.0835);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,56.08114);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,34.33694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,15.47093);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,8.526251);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,3.712814);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.008741);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,0.7713469);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.3404157);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,0.5727579);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2005714);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,9.152425);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,15.67486);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,17.2844);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,16.97718);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,16.20258);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,15.44242);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,14.51762);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,13.62458);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,12.71526);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,11.98964);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,11.40972);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,10.96487);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,10.60163);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,10.34524);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,9.901347);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,7.814704);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,6.442002);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,5.174918);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,4.196799);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,3.388618);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,2.57064);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,1.892176);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.483557);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,0.9921228);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.7452606);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.4858958);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.3639093);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2246786);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.1530464);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2025005);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(695813);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
