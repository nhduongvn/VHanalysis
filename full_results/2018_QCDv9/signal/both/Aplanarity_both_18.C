#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-1.387258,1.171633,10.17322);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.017176);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0);
   st_stack_191->SetMaximum(9.017176);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,4.374226);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,3.153381);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,2.27628);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,1.414594);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,1.029441);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.7837643);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.6148976);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.3886887);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.2940708);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.2038075);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.1797619);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.1291653);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.09843733);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.05585594);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.03709417);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.02741332);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.01037504);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.00704438);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.005171);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,0.002636796);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.1072702);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.09131885);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.07815124);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.0622505);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.05156774);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.04521536);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.04045842);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.03236445);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.02787929);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.02431768);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.021667);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.01879947);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.01655608);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.01219901);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.01101913);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.008377246);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.005278362);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.004073975);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.003834953);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,0.002636796);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.637225);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,1.055684);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.7022712);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.4643326);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.3233255);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.21775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.1569089);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.1077432);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.06315313);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.04006939);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.02783618);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.0235641);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.01572487);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.009002939);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.005379052);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.004203577);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0009993488);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.001187188);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.0007287886);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0003697091);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.02502813);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.02016306);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.01636665);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.01335424);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.01112958);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.009120994);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.007740565);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.006425745);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.004925747);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.003885955);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.003244767);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.00301402);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.002319285);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001763569);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.001395277);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.00123105);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0005781357);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0006969021);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0005154493);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0003697091);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
