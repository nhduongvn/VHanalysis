#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_signal_18_logY()
{
//=========Macro generated from canvas: CvB_jets_all_signal_18/CvB_jets_all_signal_18
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_signal_18 = new TCanvas("CvB_jets_all_signal_18", "CvB_jets_all_signal_18",0,0,600,600);
   CvB_jets_all_signal_18->SetHighLightColor(2);
   CvB_jets_all_signal_18->Range(-0.2183529,0.284042,1.171633,3.622374);
   CvB_jets_all_signal_18->SetFillColor(0);
   CvB_jets_all_signal_18->SetFillStyle(4000);
   CvB_jets_all_signal_18->SetBorderMode(0);
   CvB_jets_all_signal_18->SetBorderSize(2);
   CvB_jets_all_signal_18->SetLogy();
   CvB_jets_all_signal_18->SetLeftMargin(0.15709);
   CvB_jets_all_signal_18->SetRightMargin(0.1234783);
   CvB_jets_all_signal_18->SetBottomMargin(0.12);
   CvB_jets_all_signal_18->SetFrameFillStyle(1000);
   CvB_jets_all_signal_18->SetFrameBorderMode(0);
   CvB_jets_all_signal_18->SetFrameFillStyle(1000);
   CvB_jets_all_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1361.971);
   
   TH1F *st_stack_179 = new TH1F("st_stack_179","",20,0,1);
   st_stack_179->SetMinimum(4.837733);
   st_stack_179->SetMaximum(1943.306);
   st_stack_179->SetDirectory(0);
   st_stack_179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_179->SetLineColor(ci);
   st_stack_179->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_179->GetXaxis()->SetRange(1,20);
   st_stack_179->GetXaxis()->SetLabelFont(42);
   st_stack_179->GetXaxis()->SetTitleOffset(1);
   st_stack_179->GetXaxis()->SetTitleFont(42);
   st_stack_179->GetYaxis()->SetTitle("Event/0.05");
   st_stack_179->GetYaxis()->SetLabelFont(42);
   st_stack_179->GetYaxis()->SetTitleSize(0.037);
   st_stack_179->GetYaxis()->SetTitleFont(42);
   st_stack_179->GetZaxis()->SetLabelFont(42);
   st_stack_179->GetZaxis()->SetTitleOffset(1);
   st_stack_179->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_179);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,175.1837);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,44.03418);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,37.15864);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,41.78113);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,50.88385);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,60.80858);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,76.07731);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,97.30196);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,132.56);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,199.6962);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,336.6355);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,915.4018);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,992.2231);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,717.2292);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,676.5828);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,736.0242);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,846.794);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,945.4108);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,786.202);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,138.4232);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,0.7583519);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,0.3701187);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,0.3366057);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,0.356372);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,0.3923509);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,0.4250037);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,0.4793446);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,0.5474497);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,0.6490219);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,0.7909202);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,0.9951108);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.624333);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.704178);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.49632);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.456331);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.547464);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.651348);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.763539);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.611894);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,0.6757933);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(3350955);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,32.84342);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,7.174904);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,5.951829);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,6.44447);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,7.438414);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,8.868963);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,10.97537);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,13.9508);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,19.01363);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,28.41217);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,47.83697);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,128.1199);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,138.2126);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,99.06678);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,96.18033);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,111.7023);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,138.2966);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,172.6022);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,148.9986);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,31.54456);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,0.1177826);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,0.05523671);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,0.05169359);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,0.04897051);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,0.05282857);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,0.06098553);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,0.06586366);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,0.07550577);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,0.08492851);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,0.1047471);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,0.1326423);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,0.2139084);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,0.2238232);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,0.1917846);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,0.1941036);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,0.2124128);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,0.2316823);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,0.2638575);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,0.2466908);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,0.115221);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3757140);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_signal_18->Modified();
   CvB_jets_all_signal_18->cd();
   CvB_jets_all_signal_18->SetSelected(CvB_jets_all_signal_18);
}
