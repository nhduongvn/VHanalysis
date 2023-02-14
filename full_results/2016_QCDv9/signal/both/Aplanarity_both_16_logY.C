#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Feb 14 10:43:09 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,0.4267842,1.171633,3.030151);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(442.803);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(5.485147);
   st_stack_189->SetMaximum(588.5924);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Events/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3.275374);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,2.384559);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1.690249);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,1.035742);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.7343356);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.4890734);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.3611944);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.3308292);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.1998952);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.1290697);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.1039959);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.07660481);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.07953801);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.0514019);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.01774892);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.0212468);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.01059785);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.003231239);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,0.002871662);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.0989903);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.08415179);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.0710654);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.05557577);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.04707948);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.03816973);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.03321902);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.03142102);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.02582753);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.02007876);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01753554);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.01503564);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.01533167);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.01249644);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.007272044);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.008043123);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.00535802);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.003231239);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,0.002871662);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(3861);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.152655);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.7459368);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.4994401);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.345792);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.2257105);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.1581046);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.1127198);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.07329111);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.04529437);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.03478139);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.02162234);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01239252);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.01149337);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.004371945);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.003530464);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.002231758);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.001584193);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0004216175);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.001135226);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.0208814);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01689729);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.01382873);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.01154216);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.009332714);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.007823641);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.006584393);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.005326574);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.004191059);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.003679043);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.002897836);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.002172565);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.002071049);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001278406);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.001180138);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0009216915);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0007926875);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0004216175);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0006561877);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(9203);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
