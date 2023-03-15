#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2183529,-0.0870474,1.171633,0.6383476);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15709);
   Sphericity_both_17->SetRightMargin(0.1234783);
   Sphericity_both_17->SetBottomMargin(0.12);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",25,0,1);
   st_stack_186->SetMinimum(-2.418813e+09);
   st_stack_186->SetMaximum(-0.567804);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("Sphericity");
   st_stack_186->GetXaxis()->SetRange(1,25);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Event/0.04");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.04835273);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.167399);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.3347292);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.3468246);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.3867341);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.3877964);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.3516301);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.3021881);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.2730163);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.2715316);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.2537316);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.2236659);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.1962119);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.1864925);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.1623787);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.1178691);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.1128527);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.0743976);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,0.05399971);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,0.02525061);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,0.01180891);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,0.002980441);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.007618283);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.01447272);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.02074599);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.02143823);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.02252618);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02315831);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.02166933);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.02011831);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.01899497);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.01873605);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.01867388);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.01713874);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.01625871);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.0156275);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.01477874);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.01267145);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.01246065);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.009847192);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,0.008548088);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,0.005761916);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,0.00396693);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,0.002110911);
   VbbHcc_both_Sphericity_stack_1->SetEntries(3542);

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
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.0239165);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.0844099);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.1271224);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.155892);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.1467729);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.1510684);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.1480592);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.1448444);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.1462759);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.120837);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.1078963);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.09139186);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.08004578);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.08316199);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.06032324);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.04841255);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.04380296);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.0301088);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.01902265);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.007075202);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.002834372);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.000535087);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.000419035);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.001924052);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.003709238);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.004626971);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.005110788);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.004971686);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.005061588);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.005005744);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.004943709);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.00498966);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.00455402);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.004282585);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.003940276);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.0036831);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.003758483);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.003211052);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.002864838);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.002733779);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.002270853);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.001802422);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.001099455);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.0006833029);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.0003092305);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.0002477032);
   VbbHcc_both_Sphericity_stack_2->SetEntries(11286);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
