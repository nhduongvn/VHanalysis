#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_all()
{
//=========Macro generated from canvas: CvL_jets_all_all/CvL_jets_all_all
//=========  (Mon Dec 19 11:03:48 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_all = new TCanvas("CvL_jets_all_all", "CvL_jets_all_all",0,0,600,600);
   CvL_jets_all_all->SetHighLightColor(2);
   CvL_jets_all_all->Range(-0.2183529,-2387.937,1.171633,17511.54);
   CvL_jets_all_all->SetFillColor(0);
   CvL_jets_all_all->SetFillStyle(4000);
   CvL_jets_all_all->SetBorderMode(0);
   CvL_jets_all_all->SetBorderSize(2);
   CvL_jets_all_all->SetLeftMargin(0.15709);
   CvL_jets_all_all->SetRightMargin(0.1234783);
   CvL_jets_all_all->SetBottomMargin(0.12);
   CvL_jets_all_all->SetFrameFillStyle(1000);
   CvL_jets_all_all->SetFrameBorderMode(0);
   CvL_jets_all_all->SetFrameFillStyle(1000);
   CvL_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(15521.59);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",20,0,1);
   st_stack_116->SetMinimum(0);
   st_stack_116->SetMaximum(15521.59);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_116->GetXaxis()->SetRange(1,20);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.05");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_jets_all_CvL_all_stack_1 = new TH1D("VbbHcc_jets_all_CvL_all_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(1,2059.577);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(2,9012.252);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(3,2386.368);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(4,823.9092);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(5,481.1727);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(6,325.298);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(7,249.2922);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(8,199.504);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(9,176.6048);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(10,154.0866);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(11,137.1746);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(12,118.4981);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(13,115.0598);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(14,103.1629);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(15,95.59448);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(16,87.6654);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(17,85.97881);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(18,84.16092);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(19,83.47602);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(20,23.47078);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(1,2.124124);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(2,4.394404);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(3,2.262462);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(4,1.333128);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(5,1.020005);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(6,0.8406441);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(7,0.7372572);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(8,0.6604483);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(9,0.6217307);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(10,0.5814797);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(11,0.549694);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(12,0.5100093);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(13,0.504834);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(14,0.4769596);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(15,0.4600517);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(16,0.4419482);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(17,0.4364257);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(18,0.4327226);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(19,0.4299583);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(20,0.2271725);
   VbbHcc_jets_all_CvL_all_stack_1->SetEntries(1.036165e+07);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_all_stack_2 = new TH1D("VbbHcc_jets_all_CvL_all_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(1,394.1999);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(2,1335.477);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(3,356.5305);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(4,126.8329);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(5,75.24237);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(6,52.04252);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(7,40.27023);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(8,32.57573);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(9,29.38218);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(10,25.6362);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(11,23.0096);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(12,20.41202);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(13,19.68661);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(14,17.95173);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(15,17.05499);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(16,15.99949);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(17,15.75777);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(18,16.08794);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(19,17.29212);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(20,5.739536);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(1,0.3428117);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(2,0.6184449);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(3,0.3197768);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(4,0.191411);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(5,0.1471955);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(6,0.122832);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(7,0.1084295);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(8,0.09753259);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(9,0.09276214);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(10,0.08680449);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(11,0.08247957);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(12,0.07792361);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(13,0.07686492);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(14,0.0735357);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(15,0.07158135);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(16,0.06928173);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(17,0.06900698);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(18,0.06965989);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(19,0.07224562);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(20,0.04186969);
   VbbHcc_jets_all_CvL_all_stack_2->SetEntries(1.122788e+07);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_all->Modified();
   CvL_jets_all_all->cd();
   CvL_jets_all_all->SetSelected(CvL_jets_all_all);
}
