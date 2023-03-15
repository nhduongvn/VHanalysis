#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2183529,-0.05634227,1.171633,0.4131766);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15709);
   Sphericity_both_16->SetRightMargin(0.1234783);
   Sphericity_both_16->SetBottomMargin(0.12);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",25,0,1);
   st_stack_185->SetMinimum(-2.364781e+09);
   st_stack_185->SetMaximum(-0.3806953);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("Sphericity");
   st_stack_185->GetXaxis()->SetRange(1,25);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/0.04");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.02609963);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.1231563);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.1948274);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.2427672);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.2542205);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.2143884);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.2225198);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.1842702);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.1682691);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.1692196);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.1694552);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.1072622);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.1389636);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.1237155);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.1181544);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.08965469);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.07210353);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.05926252);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,0.04090562);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,0.01634121);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,0.002043451);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.006967052);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.01562992);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.01983811);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.02245368);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.02293591);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02128339);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.02169712);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.01963135);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.01868375);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.01880655);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.01869971);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.0153662);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.01685459);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.01660702);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.01573075);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.01394853);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.01241083);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.01117266);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,0.009137767);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,0.005792411);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,0.002043451);
   VbbHcc_both_Sphericity_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.01845603);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.05247832);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.08298774);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.09270801);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.09456496);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.09001889);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.09481157);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.09867136);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.08866106);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.07768665);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.07299572);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.06044613);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.06041014);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.03948996);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.03882125);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.03329778);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.02385168);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.02398294);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.007908841);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.005795363);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.001824285);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.00216951);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.003715082);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.004683817);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.004973263);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.005010064);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.004911201);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.005044758);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.005163774);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.004897342);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.004575491);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.004444394);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.004029086);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.004039839);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.003261268);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.003205782);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.003001565);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.00251099);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.002541938);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.001477926);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.001266788);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.0006908565);
   VbbHcc_both_Sphericity_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
