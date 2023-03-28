#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_all()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Mon Mar 27 11:09:53 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(-0.2183529,-0.4243266,1.171633,3.111729);
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
   st->SetMaximum(2.758123);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0);
   st_stack_252->SetMaximum(2.758123);
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
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,0.2662608);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,1.114102);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,1.652964);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,1.64608);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,1.408789);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,0.7777878);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,0.4921838);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,0.291538);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,0.2312643);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,0.2018857);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,0.1563972);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,0.1037421);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,0.08253398);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,0.09803173);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,0.04122835);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,0.04315775);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,0.03775801);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,0.02078378);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,0.01049327);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,0.002958322);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,0.02532647);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,0.05837058);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,0.06768491);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,0.06488508);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,0.07128548);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,0.04367253);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,0.03483231);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,0.02656602);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,0.02354127);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,0.02238169);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,0.01912172);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,0.01607161);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,0.01363398);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,0.01569931);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,0.009648364);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,0.01020504);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,0.009515564);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,0.007467206);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,0.004719625);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,0.002958322);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(3908);

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
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,0.1856144);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,0.537835);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,0.6362784);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,0.6244279);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,0.4572662);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,0.3006408);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,0.2099701);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,0.1405493);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,0.1087684);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,0.07959949);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,0.06912625);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,0.05578382);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,0.04754296);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,0.03389693);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,0.0329379);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,0.02405333);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,0.01261318);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,0.01246945);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,0.006674255);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,0.001532884);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,0.0006896062);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,0.007674201);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,0.01318131);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,0.01430603);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,0.01439981);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,0.01303134);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,0.00982009);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,0.008404657);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,0.007495704);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,0.005878555);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,0.004982211);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,0.004672026);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,0.004278411);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,0.003913357);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,0.003298175);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,0.003184768);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,0.002805994);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,0.001997648);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,0.002002287);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,0.001432565);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.000699532);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,0.0004116451);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(12102);

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
