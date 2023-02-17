#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_all()
{
//=========Macro generated from canvas: Z_dR_alljet_all/Z_dR_alljet_all
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_all = new TCanvas("Z_dR_alljet_all", "Z_dR_alljet_all",0,0,600,600);
   Z_dR_alljet_all->SetHighLightColor(2);
   Z_dR_alljet_all->Range(-1.310117,-4.715248e+10,7.029799,3.457849e+11);
   Z_dR_alljet_all->SetFillColor(0);
   Z_dR_alljet_all->SetFillStyle(4000);
   Z_dR_alljet_all->SetBorderMode(0);
   Z_dR_alljet_all->SetBorderSize(2);
   Z_dR_alljet_all->SetLeftMargin(0.15709);
   Z_dR_alljet_all->SetRightMargin(0.1234783);
   Z_dR_alljet_all->SetBottomMargin(0.12);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.064911e+11);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0);
   st_stack_212->SetMaximum(3.064911e+11);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetTitleOffset(1);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetTitleSize(0.037);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetTitleOffset(1);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(2,7.19247e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(3,3.891858e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(4,9.449732e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(5,7.923249e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(6,8.495454e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(7,9.385495e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(8,1.027891e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(9,1.127507e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(10,1.23636e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(11,1.3569e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(12,1.486632e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(13,1.627209e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(14,1.780828e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(15,1.948875e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(16,2.04318e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(17,1.605068e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(18,1.375879e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(19,1.225786e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(20,1.111015e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(21,1.018113e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(22,9.371251e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(23,8.625393e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(24,7.905807e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(25,7.258915e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(26,6.70506e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(27,6.253596e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(28,5.927768e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(29,5.510157e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(30,5.03419e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(31,3.118941e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(2,1253443);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(3,2.919845e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(4,4.542026e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(5,4.160845e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(6,4.315907e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(7,4.53137e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(8,4.743353e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(9,4.974958e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(10,5.208269e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(11,5.470573e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(12,5.721716e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(13,5.996096e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(14,6.276264e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(15,6.559838e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(16,6.717077e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(17,5.959752e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(18,5.528012e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(19,5.209782e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(20,4.965816e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(21,4.741596e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(22,4.55529e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(23,4.371592e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(24,4.18413e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(25,4.007953e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(26,3.858695e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(27,3.722038e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(28,3.626256e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(29,3.489688e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(30,3.345133e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(31,8.318585e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetEntries(7.031602e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(2,1977.452);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(3,1662290);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(4,3335638);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(5,4051863);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(6,5006790);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(7,5858021);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(8,6555492);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(9,7118372);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(10,7582044);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(11,8003063);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(12,8414709);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(13,8828052);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(14,9238550);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(15,9630862);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(16,9411932);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(17,5795294);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(18,4028170);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(19,3003757);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(20,2313784);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(21,1819490);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(22,1449868);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(23,1164627);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(24,939887.2);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(25,760486);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(26,615691.6);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(27,498277.7);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(28,402053.2);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(29,321848.8);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(30,255822.9);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(31,858600.4);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(2,12.35086);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(3,355.5022);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(4,502.6348);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(5,556.2532);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(6,619.6314);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(7,669.9206);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(8,708.0304);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(9,737.7362);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(10,760.5801);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(11,781.6502);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(12,800.729);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(13,820.5464);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(14,840.2737);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(15,859.0048);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(16,849.0877);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(17,662.7749);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(18,549.5691);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(19,472.2482);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(20,412.7722);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(21,364.1147);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(22,323.3862);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(23,288.648);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(24,258.3477);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(25,231.5134);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(26,206.8843);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(27,185.8373);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(28,166.0492);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(29,148.0987);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(30,131.5928);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(31,237.5775);
   VbbHcc_alljet_Z_dR_all_stack_2->SetEntries(1.853042e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_alljet_all->Modified();
   Z_dR_alljet_all->cd();
   Z_dR_alljet_all->SetSelected(Z_dR_alljet_all);
}
