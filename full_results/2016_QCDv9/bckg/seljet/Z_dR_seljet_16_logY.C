#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,0.2027057,7.029799,12.88079);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLogy();
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
   st->SetMinimum(283.9822);
   st->SetMaximum(1.494697e+11);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(52.97552);
   st_stack_241->SetMaximum(4.101826e+11);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetTitleOffset(1);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetTitleSize(0.037);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetTitleOffset(1);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,645385.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,4.492773e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,7.953695e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,6.690107e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,6.601209e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,6.893977e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,7.212912e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,7.724135e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,8.395854e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,9.239844e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.028959e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.152672e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.285715e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,1.423985e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,1.493207e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,9.772272e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,7.052099e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,5.318216e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,3.984745e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,2.957616e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.15459e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.509467e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,9.96415e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,5.833426e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,3.096957e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.493849e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,3947085);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,283923.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,61370.28);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,1558794);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,2246733);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2107697);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,2107997);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,2182034);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,2249279);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,2345129);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,2459234);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,2588638);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,2751796);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,2941124);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,3139179);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,3352954);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,3497509);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,2842358);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,2419312);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,2120339);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,1838647);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,1591756);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,1370717);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1161497);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,953273.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,733519.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,541391.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,386963);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,190894.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,56583.46);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(6.692449e+07);

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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,394.0413);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,317929.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,618196.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,754029);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,926414.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1072865);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1183095);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1259916);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1312768);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1357157);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1403141);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1452392);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1503775);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1554355);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1490317);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,808173.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,495376.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,324524.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,215961.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,143022.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,92696.47);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,58034.39);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,34162.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,18159.86);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,8738.484);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,3552.014);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,936.536);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,58.40082);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.37964);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,155.3946);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,218.1794);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,242.24);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,268.8579);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,289.2973);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,303.6275);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,313.1795);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,319.7192);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,325.375);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,331.3469);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,337.7677);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,344.4114);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,350.8435);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,343.9396);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,252.4012);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,196.7601);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,158.5138);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,128.6537);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,104.1781);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,83.41718);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,65.65772);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,50.10188);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,36.40077);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,25.12087);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,15.91437);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,8.116222);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,2.024285);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(2.603414e+08);

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
