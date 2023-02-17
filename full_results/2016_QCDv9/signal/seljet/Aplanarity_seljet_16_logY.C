#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_16/Aplanarity_seljet_16
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_16 = new TCanvas("Aplanarity_seljet_16", "Aplanarity_seljet_16",0,0,600,600);
   Aplanarity_seljet_16->SetHighLightColor(2);
   Aplanarity_seljet_16->Range(-0.2183529,0.1593284,1.171633,4.164107);
   Aplanarity_seljet_16->SetFillColor(0);
   Aplanarity_seljet_16->SetFillStyle(4000);
   Aplanarity_seljet_16->SetBorderMode(0);
   Aplanarity_seljet_16->SetBorderSize(2);
   Aplanarity_seljet_16->SetLogy();
   Aplanarity_seljet_16->SetLeftMargin(0.15709);
   Aplanarity_seljet_16->SetRightMargin(0.1234783);
   Aplanarity_seljet_16->SetBottomMargin(0.12);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3826.229);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",50,0,1);
   st_stack_317->SetMinimum(4.364172);
   st_stack_317->SetMaximum(5802.683);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetTitle("Aplanarity");
   st_stack_317->GetXaxis()->SetRange(1,50);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetTitleOffset(1);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.02");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetTitleSize(0.037);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetTitleOffset(1);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,27.71566);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,19.7895);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,13.6172);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,8.621306);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,6.233835);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,4.338131);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,3.251087);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,2.361044);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,1.664881);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.251595);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,0.8347428);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,0.6480067);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,0.4423168);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,0.2868464);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.1833946);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.184661);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.07257304);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.03837697);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.02932443);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.008735195);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.002997385);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.2869569);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.2435681);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.2025977);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.1610329);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.1368192);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.114339);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.09989812);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.08444372);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.07195697);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.06139616);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.05014303);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.04476559);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.03623073);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.02906064);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.02343902);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.02337532);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.01463842);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.01145332);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.009300277);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.005044281);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.002997385);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(32424);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,10.54663);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,8.027938);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,5.320285);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,3.565447);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,2.477759);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,1.653153);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,1.157088);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,0.8026528);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,0.5649555);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.3808377);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.2589888);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.1754574);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.1183946);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.06329312);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.04834467);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.02658402);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.0145722);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01013363);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.004790583);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.003050745);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.0005716233);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.0006476138);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.06319989);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.05542252);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.04518423);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.03706256);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.0309219);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.02525098);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.02114201);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.01761843);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01475597);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01213849);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01000976);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.008233406);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.006719584);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.004915778);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.004349989);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.003187593);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.002377844);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.001967359);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001384361);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.001080917);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0004309679);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0004677618);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(93749);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_seljet_16->Modified();
   Aplanarity_seljet_16->cd();
   Aplanarity_seljet_16->SetSelected(Aplanarity_seljet_16);
}
