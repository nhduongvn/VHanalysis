#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_16()
{
//=========Macro generated from canvas: CvL_jets_16/CvL_jets_16
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_16 = new TCanvas("CvL_jets_16", "CvL_jets_16",0,0,600,600);
   CvL_jets_16->SetHighLightColor(2);
   CvL_jets_16->Range(-0.2183529,-168.1988,1.171633,1233.458);
   CvL_jets_16->SetFillColor(0);
   CvL_jets_16->SetFillStyle(4000);
   CvL_jets_16->SetBorderMode(0);
   CvL_jets_16->SetBorderSize(2);
   CvL_jets_16->SetLeftMargin(0.15709);
   CvL_jets_16->SetRightMargin(0.1234783);
   CvL_jets_16->SetBottomMargin(0.12);
   CvL_jets_16->SetFrameFillStyle(1000);
   CvL_jets_16->SetFrameBorderMode(0);
   CvL_jets_16->SetFrameFillStyle(1000);
   CvL_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1093.292);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",20,0,1);
   st_stack_9->SetMinimum(0);
   st_stack_9->SetMaximum(1093.292);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_9->GetXaxis()->SetRange(1,20);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/0.05");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,388.566);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,611.7343);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,268.2179);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,135.0059);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,87.9881);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,62.57441);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,48.4857);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,39.14752);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,34.76967);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,30.20362);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,26.55176);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,22.94189);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,21.7671);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,19.47384);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,17.54792);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,16.11182);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,14.94837);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,14.46994);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,13.90397);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,3.637426);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.7869273);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,0.9842761);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.6511851);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.4621918);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.373229);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.3153319);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.2782548);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.2499076);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.2353744);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.2199493);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.2064781);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.1919958);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.1870539);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.1765493);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.1680214);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.1613444);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.1554923);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.1530852);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.1495525);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.07626101);
   VbbHcc_jets_CvL_stack_1->SetEntries(1384252);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,81.22722);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,117.1272);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,48.16969);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,24.2662);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,15.83778);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,11.25074);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,8.714558);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,7.038411);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,6.294517);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,5.478962);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,4.877551);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,4.214629);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,3.984664);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,3.646956);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,3.326219);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,3.046066);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,3.001396);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,2.957516);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,3.045118);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,0.9246909);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,0.1245852);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,0.1489196);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,0.09519606);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,0.06762193);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,0.05467481);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,0.04611625);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,0.04059993);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,0.03652024);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,0.03456661);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,0.032255);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,0.03045679);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,0.02831746);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,0.0275678);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,0.02638055);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,0.02520576);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,0.02412115);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,0.02398303);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,0.02380219);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,0.02416475);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,0.01334148);
   VbbHcc_jets_CvL_stack_2->SetEntries(2031837);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","ZHcc","F");

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
   CvL_jets_16->Modified();
   CvL_jets_16->cd();
   CvL_jets_16->SetSelected(CvL_jets_16);
}
