#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-0.1611855,7.029799,1.182027);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(99.7815);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(-3.332806e+09);
   st_stack_145->SetMaximum(-59.88786);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.2624729);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.4467009);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.6051494);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.653657);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.6442276);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.6125412);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.5499903);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.4321472);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.4283084);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.4965384);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.4893888);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.4954156);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.5125027);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.4930413);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.1699187);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.09718672);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.03998326);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.03047387);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.01198985);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.0151521);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.003188493);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.003014248);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.01998526);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.02656274);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.03085748);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.03196996);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.03170834);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.03076792);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.02934325);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.02635752);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.02557414);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.02770329);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.02792647);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.0274396);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.02808315);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.02770505);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.01626272);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01213692);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.007675232);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.006836921);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.004294459);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.004615728);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.002227704);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.002131957);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,0.001493284);
   VbbHcc_both_Z_dR_stack_1->SetEntries(5476);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0001817164);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1497408);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.260125);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.3302213);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.3441579);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.2745312);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.2057631);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.1541753);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.1357281);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1207293);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1347745);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1324849);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.1381999);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.1459379);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.1514858);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.07041397);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.03713634);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.02189841);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.0173916);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.009055211);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.004829581);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.004030523);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.001340652);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0004749352);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,4.000765e-05);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,0.000131537);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.00018361);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0001817164);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.005324094);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.007000435);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.007919178);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.00808498);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.007210058);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.006250731);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.005398715);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.005046161);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.00475474);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.005045594);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.004995154);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.005112766);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.005257748);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.00534547);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.003655098);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.002634459);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.002024763);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001821951);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001296041);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.0009443601);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0008342753);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0004942838);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0002767077);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,4.000765e-05);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,0.000131537);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.00018361);
   VbbHcc_both_Z_dR_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
