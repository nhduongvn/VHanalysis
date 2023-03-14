#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_signal_16()
{
//=========Macro generated from canvas: CvB_jets_signal_16/CvB_jets_signal_16
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_signal_16 = new TCanvas("CvB_jets_signal_16", "CvB_jets_signal_16",0,0,600,600);
   CvB_jets_signal_16->SetHighLightColor(2);
   CvB_jets_signal_16->Range(-0.2183529,-69.90298,1.171633,512.6219);
   CvB_jets_signal_16->SetFillColor(0);
   CvB_jets_signal_16->SetFillStyle(4000);
   CvB_jets_signal_16->SetBorderMode(0);
   CvB_jets_signal_16->SetBorderSize(2);
   CvB_jets_signal_16->SetLeftMargin(0.15709);
   CvB_jets_signal_16->SetRightMargin(0.1234783);
   CvB_jets_signal_16->SetBottomMargin(0.12);
   CvB_jets_signal_16->SetFrameFillStyle(1000);
   CvB_jets_signal_16->SetFrameBorderMode(0);
   CvB_jets_signal_16->SetFrameFillStyle(1000);
   CvB_jets_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(454.3694);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",20,0,1);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(454.3694);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_19->GetXaxis()->SetRange(1,20);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Event/0.05");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,50.86985);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,11.28542);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,8.927785);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,9.529413);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,10.3607);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,11.38887);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,12.95914);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,15.05688);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,18.69281);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,23.28747);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,28.27143);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,34.03989);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,46.4685);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,60.04654);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,86.0573);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,123.6629);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,186.3624);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,296.1413);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,311.5831);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,58.78928);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.39525);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,0.1858732);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,0.1653522);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,0.1712265);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,0.1790118);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,0.1866729);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,0.1992087);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,0.2151285);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.2383818);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.2666542);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.2947121);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.3225098);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.3773222);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.4280209);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.5124125);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.6141132);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.7543543);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,0.9515184);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,0.9789713);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.4256791);
   VbbHcc_jets_CvB_stack_1->SetEntries(508987);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,12.33165);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,2.533269);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1.911381);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1.967273);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,2.125671);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,2.287556);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,2.487161);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,2.896779);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,3.561492);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,4.319017);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,5.223054);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,6.492141);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,8.858713);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,11.73729);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,16.72539);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,24.75086);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,39.6478);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,65.44327);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,65.54354);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,13.90881);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,0.06879259);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,0.03111058);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,0.02700933);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,0.0274145);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,0.02846774);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,0.02953518);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,0.03078013);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,0.03320497);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,0.03687496);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,0.04053801);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,0.04457925);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,0.04969174);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,0.05804394);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,0.06681352);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,0.07977538);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,0.09709709);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,0.1230051);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,0.1582918);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,0.1586325);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,0.07316704);
   VbbHcc_jets_CvB_stack_2->SetEntries(785295);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_signal_16->Modified();
   CvB_jets_signal_16->cd();
   CvB_jets_signal_16->SetSelected(CvB_jets_signal_16);
}
