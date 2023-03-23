#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-1.513573,1.171633,11.09954);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.838226);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0);
   st_stack_256->SetMaximum(9.838226);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Event/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,5.838145);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,1.736826);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,0.5121598);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,0.2069718);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,0.1166938);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,0.04587203);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,0.03307334);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,0.01426594);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,0.007723335);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,0.004771585);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,0.003901519);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,0.001117628);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,0.004632235);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,0.0009559662);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,0.0009559662);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,0.1297995);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,0.06865142);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,0.03513553);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,0.0223589);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,0.01655545);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,0.01079114);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,0.008968243);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,0.00599312);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,0.003862188);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,0.003425653);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,0.002899939);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,0.001117628);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,0.003285691);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,0.0009559662);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,0.0009559662);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(3850);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,2.327582);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,0.6906586);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,0.2462618);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,0.1069209);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,0.04854794);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,0.02057845);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,0.01127511);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,0.01249614);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,0.005470686);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,0.003499344);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,0.002622569);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,0.001537692);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,0.0009724858);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,0.0008829417);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,0.0003156401);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.0003753755);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,0.02792971);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,0.01497758);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,0.008958303);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,0.005833674);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,0.003935312);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,0.002585764);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,0.001873715);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,0.00196618);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,0.001367276);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,0.001031742);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,0.0008678192);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.0006913621);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.0005671172);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.0005203854);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.0003156401);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.0003753755);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(11845);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
