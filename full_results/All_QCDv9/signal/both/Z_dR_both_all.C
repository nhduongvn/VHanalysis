#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-1.033337,7.029799,7.577804);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.71669);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0);
   st_stack_148->SetMaximum(6.71669);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.146436);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,1.930132);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,2.715091);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,3.036216);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,2.96084);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,2.821351);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,2.607085);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,2.226766);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,2.050185);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,2.027381);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,2.004215);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,2.100961);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,2.24204);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,2.103388);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,0.7894324);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,0.3589371);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,0.1661283);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,0.1265025);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,0.05736453);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,0.05177834);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,0.01925267);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,0.02336129);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,0.01022278);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,0.04955674);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,0.06390698);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,0.0769252);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,0.08145915);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,0.08084405);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,0.07776423);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,0.07508701);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,0.06935861);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,0.06567841);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,0.0650532);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,0.06518225);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,0.06561642);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,0.06869057);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,0.06705047);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,0.04130581);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,0.02719944);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,0.01813765);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,0.01614573);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,0.01048978);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,0.01000498);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,0.006161647);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,0.007166082);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,0.004217166);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,0.001493284);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(19568);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.0001817164);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,0.4692042);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,0.9399253);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,1.330547);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,1.441578);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,1.161469);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,0.8182518);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,0.6110236);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,0.5099886);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,0.4639361);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,0.4575265);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,0.4701659);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,0.5032973);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,0.5374814);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,0.5389119);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,0.250594);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,0.1417837);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,0.08175207);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,0.04761568);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,0.0306181);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,0.01580556);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,0.01136879);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,0.005505937);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,0.003335205);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,0.0009033073);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,0.0003904085);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,0.00018361);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.0001817164);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,0.01173841);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,0.01657037);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,0.01978727);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,0.02073596);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,0.0185572);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,0.01546848);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,0.01335247);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,0.01212018);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,0.01160795);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,0.01139697);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,0.011594);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,0.01202595);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,0.0124374);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,0.01249492);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,0.00853731);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,0.006372756);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,0.004752501);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,0.0035774);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,0.00290374);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,0.002090138);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,0.001707516);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,0.001260153);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,0.001060759);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,0.0005048435);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,0.0002903729);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.00018361);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(45428);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
