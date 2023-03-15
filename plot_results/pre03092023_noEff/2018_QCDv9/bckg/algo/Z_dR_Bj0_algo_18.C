#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-99800.35,7.029799,731869.2);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(648702.3);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0);
   st_stack_115->SetMaximum(648702.3);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,88285.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,419976.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,270015);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,202114.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,116792.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,172859.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,47188.03);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,47476.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,32847.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,23823.08);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,12966.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,8221.033);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,7137.852);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,2001.617);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,2775.023);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2557.072);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,2772.299);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,583.3768);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,2019.516);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,147.3507);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,58.9403);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,416.8929);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,42.2599);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,30.10131);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,1971.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,4604.021);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,27526.44);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,13839.83);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,13468.05);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,10249.03);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,45756.54);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,6573.768);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,22966.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,6745.409);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,5747.729);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,3701.968);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,3007.01);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2938.513);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,746.1465);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,976.155);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1994.162);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,2026.897);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,375.8499);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1958.694);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,65.89725);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,41.67708);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,369.6319);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,32.1258);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,29.47691);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1958.422);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(24188);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,1768.239);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,12491.53);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,18519.64);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,16629.91);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,11697.98);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,7425.004);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,4656.979);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,2943.081);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1952.049);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1324.6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,902.4004);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,615.9453);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,439.7409);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,301.5434);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,204.7894);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,141.204);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,102.8632);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,67.99492);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,48.56369);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,33.96873);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,21.86096);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,15.79134);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,10.04308);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.419287);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,4.283415);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,2.837539);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,2.065282);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,2.018993);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.123387);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.5872979);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.769603);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,10.85272);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,28.83524);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,35.09878);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,33.2395);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,27.87077);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,22.17736);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,17.55759);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,13.93272);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,11.34289);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,9.336957);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.695751);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,6.351511);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.368716);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.448245);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.663498);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.042138);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.604273);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.111608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.778884);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.486092);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.19008);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.025641);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.8057388);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.6464831);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.5292657);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.4295325);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3588092);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3659038);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2682983);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1975256);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3399839);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1270077);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
