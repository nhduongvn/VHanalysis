#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-0.3396036,7.029799,2.490427);
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
   st->SetMaximum(2.207424);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0);
   st_stack_145->SetMaximum(2.207424);
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
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.4276398);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.8922808);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.9975163);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,1.019715);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.9748435);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.946074);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.7928994);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.6873033);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.6423815);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.6028704);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.6071913);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.6384623);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.6073879);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.656738);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.2565421);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.09979449);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.06403943);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.04371769);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.01864835);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.01198918);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.005721971);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.002468749);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,0.001334684);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.03557637);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.05145784);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.05466057);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.05516404);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.05414619);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.05279342);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.04940757);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.04549549);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.0436578);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.04302075);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.04226319);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.04355439);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.04266161);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.04479265);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.02765326);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01766337);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.0136972);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.01131381);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.007104469);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.006000661);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.004046081);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.002468749);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,0.001334684);
   VbbHcc_both_Z_dR_stack_1->SetEntries(3861);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1737698);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.3836367);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.4496311);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.4519004);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.3688053);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.2404282);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.1816876);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.15175);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1378932);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1279481);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1427016);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.154808);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.166846);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.1574592);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.07610861);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.03212213);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.01933058);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.01522072);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.009132093);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.005644105);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.001143462);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.001986026);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.001114495);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,0.0010673);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.00811941);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.01208298);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01313162);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.0131517);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.01190827);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.009623212);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.008345237);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.007590712);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.007246634);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.006980428);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.007374592);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.007691114);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.008002704);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.007770677);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.005379847);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.003479797);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.002690079);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.002392101);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001820205);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001438213);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0006602293);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0008299761);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0006436778);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.0006173723);
   VbbHcc_both_Z_dR_stack_2->SetEntries(9203);

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
