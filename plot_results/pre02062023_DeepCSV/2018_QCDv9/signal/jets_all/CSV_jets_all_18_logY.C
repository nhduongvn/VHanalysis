#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_18_logY()
{
//=========Macro generated from canvas: CSV_jets_all_18/CSV_jets_all_18
//=========  (Mon Dec 19 11:03:34 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_18 = new TCanvas("CSV_jets_all_18", "CSV_jets_all_18",0,0,600,600);
   CSV_jets_all_18->SetHighLightColor(2);
   CSV_jets_all_18->Range(-0.2183529,-0.3678078,1.171633,6.66754);
   CSV_jets_all_18->SetFillColor(0);
   CSV_jets_all_18->SetFillStyle(4000);
   CSV_jets_all_18->SetBorderMode(0);
   CSV_jets_all_18->SetBorderSize(2);
   CSV_jets_all_18->SetLogy();
   CSV_jets_all_18->SetLeftMargin(0.15709);
   CSV_jets_all_18->SetRightMargin(0.1234783);
   CSV_jets_all_18->SetBottomMargin(0.12);
   CSV_jets_all_18->SetFrameFillStyle(1000);
   CSV_jets_all_18->SetFrameBorderMode(0);
   CSV_jets_all_18->SetFrameFillStyle(1000);
   CSV_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(475581.3);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",20,0,1);
   st_stack_111->SetMinimum(2.995256);
   st_stack_111->SetMaximum(920461.4);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_111->GetXaxis()->SetRange(1,20);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Events/0.05");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,4091.713);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2010.909);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,390.9237);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,200.1952);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,138.0212);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,102.2854);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,81.83355);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,67.38121);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,54.05299);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,47.48381);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,42.96757);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,37.72588);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,32.83024);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,29.22081);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,27.36113);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,27.19461);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,25.20117);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,25.94662);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,33.08997);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,146.8184);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,3.324051);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,2.289531);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,1.021604);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,0.7354941);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,0.6134692);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,0.5281466);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,0.4733111);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,0.4281515);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,0.3832031);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,0.3604157);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,0.3417061);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,0.3220612);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,0.2987869);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,0.2841474);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,0.2734451);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,0.2718372);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,0.264006);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,0.2666997);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,0.3005333);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,0.6349931);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(3595990);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,664.0996);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,287.889);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,57.3873);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,30.06179);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,20.80218);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,15.5766);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,12.35422);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,10.24077);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,8.384293);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,7.168418);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,6.519757);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,5.775228);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,5.061593);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,4.622466);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,4.257525);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,4.181404);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,3.983622);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,4.168381);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,5.485407);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,27.77174);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,0.5033931);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,0.3244023);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,0.1470699);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,0.1074156);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,0.08895142);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,0.07717875);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,0.06903449);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,0.06272673);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,0.05673315);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,0.05246346);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,0.04984174);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,0.04702918);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,0.04424596);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,0.041994);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,0.04045331);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,0.03999292);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,0.03897901);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,0.03991496);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,0.04675887);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,0.1038866);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3566450);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","ZHcc","F");

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
   CSV_jets_all_18->Modified();
   CSV_jets_all_18->cd();
   CSV_jets_all_18->SetSelected(CSV_jets_all_18);
}
