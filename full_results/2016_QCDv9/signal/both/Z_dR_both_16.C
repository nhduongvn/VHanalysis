#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-0.2332195,7.029799,1.710276);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
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
   st->SetMaximum(1.515927);
   
   TH1F *st_stack_129 = new TH1F("st_stack_129","",30,0,6);
   st_stack_129->SetMinimum(0);
   st_stack_129->SetMaximum(1.515927);
   st_stack_129->SetDirectory(0);
   st_stack_129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_129->SetLineColor(ci);
   st_stack_129->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_129->GetXaxis()->SetRange(1,30);
   st_stack_129->GetXaxis()->SetLabelFont(42);
   st_stack_129->GetXaxis()->SetTitleOffset(1);
   st_stack_129->GetXaxis()->SetTitleFont(42);
   st_stack_129->GetYaxis()->SetTitle("Events/0.2");
   st_stack_129->GetYaxis()->SetLabelFont(42);
   st_stack_129->GetYaxis()->SetTitleSize(0.037);
   st_stack_129->GetYaxis()->SetTitleFont(42);
   st_stack_129->GetZaxis()->SetLabelFont(42);
   st_stack_129->GetZaxis()->SetTitleOffset(1);
   st_stack_129->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_129);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.2683881);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.4643016);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.6191298);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.6664598);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.658327);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.6244087);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.5535118);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.4480126);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.4348662);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.5051148);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.507934);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.5019072);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.5259723);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.5155459);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.1739007);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.1035026);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.03993808);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.02907725);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.01198985);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.01393785);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.003188493);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.003014248);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.02020447);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.02706322);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.03115092);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.03225264);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.03202648);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.03106083);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.02944261);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.02680878);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.02580415);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.02802807);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.02844914);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.0276273);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.02842646);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.02832293);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.01645121);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01254227);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.007675099);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.006692754);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.004294459);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.00445315);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.002227704);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.002131957);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,0.001493284);
   VbbHcc_both_Z_dR_stack_1->SetEntries(5612);

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
