#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_signal_18/GenJet_all_nGenGlu_signal_18
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_signal_18 = new TCanvas("GenJet_all_nGenGlu_signal_18", "GenJet_all_nGenGlu_signal_18",0,0,600,600);
   GenJet_all_nGenGlu_signal_18->SetHighLightColor(2);
   GenJet_all_nGenGlu_signal_18->Range(-4.867058,-0.8789374,22.93266,3.334602);
   GenJet_all_nGenGlu_signal_18->SetFillColor(0);
   GenJet_all_nGenGlu_signal_18->SetFillStyle(4000);
   GenJet_all_nGenGlu_signal_18->SetBorderMode(0);
   GenJet_all_nGenGlu_signal_18->SetBorderSize(2);
   GenJet_all_nGenGlu_signal_18->SetLogy();
   GenJet_all_nGenGlu_signal_18->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_signal_18->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_signal_18->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_signal_18->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(530.0979);
   
   TH1F *st_stack_29 = new TH1F("st_stack_29","",20,-0.5,19.5);
   st_stack_29->SetMinimum(0.4233381);
   st_stack_29->SetMaximum(818.933);
   st_stack_29->SetDirectory(0);
   st_stack_29->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_29->SetLineColor(ci);
   st_stack_29->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_29->GetXaxis()->SetLabelFont(42);
   st_stack_29->GetXaxis()->SetTitleOffset(1);
   st_stack_29->GetXaxis()->SetTitleFont(42);
   st_stack_29->GetYaxis()->SetTitle("Event/1.0");
   st_stack_29->GetYaxis()->SetLabelFont(42);
   st_stack_29->GetYaxis()->SetTitleSize(0.037);
   st_stack_29->GetYaxis()->SetTitleFont(42);
   st_stack_29->GetZaxis()->SetLabelFont(42);
   st_stack_29->GetZaxis()->SetTitleOffset(1);
   st_stack_29->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_29);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,382.6999);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,391.4978);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,240.7976);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,116.492);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,50.64806);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,19.97761);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,7.452702);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,2.609605);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,0.8682067);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,0.2756274);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,0.0967141);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,0.03554358);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,0.009448273);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,0.005987344);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,1.148287);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,1.132299);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,0.8891925);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,0.5985685);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,0.4058573);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,0.2432552);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,0.1515413);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,0.08859382);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,0.04935205);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,0.0293863);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,0.01625187);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,0.01119707);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,0.005552652);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,0.004316923);
   GenJet_all_nGenGlu_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,27.44348);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,48.4835);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,43.15517);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,26.94474);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,13.23297);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,5.684896);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,2.188789);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,0.7283416);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,0.2635555);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,0.06677091);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,0.02431008);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,0.00473812);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,0.002024405);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,0.1048317);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,0.1398353);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,0.1323654);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,0.1051574);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,0.07154906);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,0.04625792);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,0.03249658);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,0.01671213);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,0.00970131);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,0.004853602);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,0.003119713);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,0.001239258);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,0.0008494828);
   GenJet_all_nGenGlu_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenGlu_signal_18->Modified();
   GenJet_all_nGenGlu_signal_18->cd();
   GenJet_all_nGenGlu_signal_18->SetSelected(GenJet_all_nGenGlu_signal_18);
}
