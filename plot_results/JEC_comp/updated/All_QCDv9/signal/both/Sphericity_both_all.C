#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_all()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(-0.2183529,-0.4658992,1.171633,3.416594);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetLeftMargin(0.15709);
   Sphericity_both_all->SetRightMargin(0.1234783);
   Sphericity_both_all->SetBottomMargin(0.12);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.028345);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0);
   st_stack_252->SetMaximum(3.028345);
   st_stack_252->SetDirectory(0);
   st_stack_252->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_252->SetLineColor(ci);
   st_stack_252->GetXaxis()->SetTitle("Sphericity");
   st_stack_252->GetXaxis()->SetRange(1,25);
   st_stack_252->GetXaxis()->SetLabelFont(42);
   st_stack_252->GetXaxis()->SetTitleOffset(1);
   st_stack_252->GetXaxis()->SetTitleFont(42);
   st_stack_252->GetYaxis()->SetTitle("Event/0.04");
   st_stack_252->GetYaxis()->SetLabelFont(42);
   st_stack_252->GetYaxis()->SetTitleSize(0.037);
   st_stack_252->GetYaxis()->SetTitleFont(42);
   st_stack_252->GetZaxis()->SetLabelFont(42);
   st_stack_252->GetZaxis()->SetTitleOffset(1);
   st_stack_252->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_252);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,0.3280474);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,1.244858);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,1.81771);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,1.776651);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,1.482109);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,0.7681185);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,0.3716215);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,0.1903068);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,0.1526182);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,0.1167005);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,0.07682805);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,0.05635548);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,0.03001795);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,0.03842666);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,0.02935707);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,0.02087491);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,0.009416485);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,0.01312932);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,0.004919465);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,0.02792639);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,0.06158974);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,0.07028828);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,0.06685058);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,0.07309383);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,0.04308467);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,0.03000065);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,0.0213426);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,0.01910611);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,0.01676883);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,0.01323486);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,0.01191118);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,0.008572459);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,0.009586088);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,0.008043935);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,0.007139262);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,0.004773407);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,0.005898489);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,0.003479033);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(3850);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,0.2173037);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,0.5639531);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,0.6958162);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,0.6523612);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,0.4688395);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,0.2997449);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,0.1776106);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,0.1104377);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,0.07546999);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,0.05262955);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,0.0350561);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,0.03301306);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,0.02889714);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,0.02250909);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,0.01739432);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,0.01151231);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,0.007665417);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,0.005319871);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,0.002186308);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,0.002277801);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,0.008323668);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,0.01343043);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,0.01495341);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,0.01446217);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,0.0130874);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,0.01008374);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,0.008398606);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,0.005846184);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,0.004879992);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,0.00402961);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,0.00331533);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,0.003297709);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,0.003035548);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,0.002660003);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,0.002310181);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,0.001979323);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,0.001556159);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,0.001365814);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,0.0007896969);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.0008707386);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(11845);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","ZHcc","F");

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
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
