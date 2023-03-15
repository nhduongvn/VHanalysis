#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_all_logY()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(-0.2183529,-3.351888,1.171633,0.4942656);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetLogy();
   Sphericity_tags_all->SetLeftMargin(0.15709);
   Sphericity_tags_all->SetRightMargin(0.1234783);
   Sphericity_tags_all->SetBottomMargin(0.12);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(16.85284);
   st_stack_60->SetMaximum(1.287212);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("Sphericity");
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Event/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,0.1382924);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,0.5057857);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,0.9220837);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,1.104709);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,1.081663);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,1.058679);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,0.9974507);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,0.8740924);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,0.8634984);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,0.8133533);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,0.7006778);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,0.6137154);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,0.6229451);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,0.5366357);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,0.5108592);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,0.3752244);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,0.2786469);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,0.2065632);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,0.1430738);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(20,0.0778418);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(21,0.02331335);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(22,0.01216726);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(24,0.001563588);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,0.01519286);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,0.02940034);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,0.04105432);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,0.05185461);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,0.04374515);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,0.04337407);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,0.04414382);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,0.04346176);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,0.03978662);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,0.04011749);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,0.03528542);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,0.03257511);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,0.03346755);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,0.0337439);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,0.03005781);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,0.02583657);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,0.02253208);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,0.01876258);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,0.01560185);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(20,0.01159419);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(21,0.006191973);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(22,0.004393657);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(24,0.001563588);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,0.07099822);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,0.2506118);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,0.3764926);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,0.4325387);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,0.4232263);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,0.4279428);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,0.4340819);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,0.4249566);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,0.4054273);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,0.3514344);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,0.324551);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,0.2814798);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,0.2571313);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,0.2252297);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,0.1871962);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,0.1504695);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,0.1231143);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,0.09449368);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.04759659);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,0.02369248);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,0.007790901);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(22,0.0008285823);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(23,0.001126185);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,0.00393101);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,0.007567316);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,0.009304051);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,0.01028942);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,0.009814441);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,0.01008308);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,0.009995812);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,0.01000606);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,0.009566376);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,0.009097204);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,0.008933042);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,0.007994973);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,0.008068786);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.007114283);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.00686813);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.006016289);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.005253239);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.005853557);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.003247837);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.002326835);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.001322966);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(22,0.0004265412);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(23,0.0005620686);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","ZHcc","F");

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
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
