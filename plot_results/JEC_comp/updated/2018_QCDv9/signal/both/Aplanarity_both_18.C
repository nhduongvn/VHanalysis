#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-0.7001376,1.171633,5.134342);
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
   st->SetMaximum(4.550894);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0);
   st_stack_255->SetMaximum(4.550894);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Event/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2.718844);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.8423188);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.2243433);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.09037929);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.05309291);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.01875519);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.0230014);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.008642655);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.002582708);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.004632235);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.0009559662);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.0009559662);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.09870616);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.05156809);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.02462315);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.01567896);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.01181213);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.007206364);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.007767097);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.005028653);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.002582708);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.003285691);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.0009559662);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.0009559662);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(1572);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.058399);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.3141572);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.1168611);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.04343776);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.01919302);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.0113535);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.004640689);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.005648739);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.003129004);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.002266684);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.001149018);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.0009823482);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.0005844399);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.0008829417);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.0003156401);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.02025094);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01074341);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.00657706);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.003897603);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.002625309);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.00201981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.001257757);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.001376814);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.001054466);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.0008689636);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.0006056569);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.0005678378);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.0004135726);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.0005203854);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0003156401);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(4685);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
