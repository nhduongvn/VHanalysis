#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Wed Jan 18 11:43:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,-3.447369e+08,7.029799,2.528071e+09);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLeftMargin(0.15709);
   Z_dR_seljet_16->SetRightMargin(0.1234783);
   Z_dR_seljet_16->SetBottomMargin(0.12);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.24079e+09);
   
   TH1F *st_stack_273 = new TH1F("st_stack_273","",30,0,6);
   st_stack_273->SetMinimum(0);
   st_stack_273->SetMaximum(2.24079e+09);
   st_stack_273->SetDirectory(0);
   st_stack_273->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_273->SetLineColor(ci);
   st_stack_273->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_273->GetXaxis()->SetRange(1,30);
   st_stack_273->GetXaxis()->SetLabelFont(42);
   st_stack_273->GetXaxis()->SetTitleOffset(1);
   st_stack_273->GetXaxis()->SetTitleFont(42);
   st_stack_273->GetYaxis()->SetTitle("Events/0.2");
   st_stack_273->GetYaxis()->SetLabelFont(42);
   st_stack_273->GetYaxis()->SetTitleSize(0.037);
   st_stack_273->GetYaxis()->SetTitleFont(42);
   st_stack_273->GetZaxis()->SetLabelFont(42);
   st_stack_273->GetZaxis()->SetTitleOffset(1);
   st_stack_273->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_273);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,630680.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,4.48479e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,7.953333e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,6.69071e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,6.610099e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,6.89157e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,7.215161e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,7.721302e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,8.392168e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,9.240491e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.027585e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.153499e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.286697e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,1.423529e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,1.492369e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,9.776646e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,7.054002e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,5.314667e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,3.980982e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,2.96646e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.165155e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.505857e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,9.949584e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,5.831058e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,3.100267e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.479052e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,4076450);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,270450.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,57565.69);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,1505999);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,2173957);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2040301);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,2043721);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,2109792);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,2177083);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,2266849);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,2377325);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,2504511);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,2656183);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,2847255);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,3038504);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,3241088);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,3379571);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,2748661);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,2339363);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,2047181);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,1774937);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,1543451);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,1331152);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1119050);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,919547.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,708818.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,523636.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,370260.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,190890.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,52698.35);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(6.188646e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,394.09);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,317952.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,618461.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,754700.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,926954.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1073476);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1183525);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1260525);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1313285);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1357573);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1403828);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1452683);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1504209);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1554632);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1490871);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,808402);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,495732.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,324679.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,216102.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,143107.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,92669.15);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,58025.85);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,34230.35);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,18168.12);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,8747.487);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,3557.851);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,934.0446);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,57.3194);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.091382);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,146.5612);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,205.5635);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,228.1032);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,253.0637);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,272.3038);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,285.7761);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,294.8091);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,300.9423);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,306.1933);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,311.7726);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,317.6621);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,323.8171);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,329.744);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,323.2337);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,237.3285);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,185.1828);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,149.2752);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,121.2499);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,98.24964);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,78.68917);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,61.98478);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,47.38532);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,34.40942);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,23.76548);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,15.06187);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,7.673276);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.898653);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(2.87454e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_seljet_16->Modified();
   Z_dR_seljet_16->cd();
   Z_dR_seljet_16->SetSelected(Z_dR_seljet_16);
}
