#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Mon Mar 20 11:50:03 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(-0.2183529,-0.3776943,1.171633,2.769758);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetLeftMargin(0.15709);
   Sphericity_algo_all->SetRightMargin(0.1234783);
   Sphericity_algo_all->SetBottomMargin(0.12);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.455013);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0);
   st_stack_156->SetMaximum(2.455013);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetTitle("Sphericity");
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetTitleOffset(1);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Event/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetTitleSize(0.037);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetTitleOffset(1);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,1.360089);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,1.498194);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,0.7802576);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,0.5480849);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,0.3628586);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,0.1447633);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,0.02710772);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,0.001495022);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,0.004047012);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,0.002499098);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,0.05848622);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,0.06120228);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,0.04524204);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,0.03772957);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,0.04886176);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,0.01898764);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,0.009300105);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,0.001495022);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,0.0028656);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,0.002499098);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,0.5054063);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,0.5394664);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,0.2729884);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,0.1733503);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,0.1021649);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,0.04392651);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,0.01334541);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,0.004834752);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,0.0007272619);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,0.001482932);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,0.0004417738);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,0.0003035629);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,0.0003865293);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,0.01292193);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,0.01362123);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,0.009376245);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,0.007510089);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,0.006517288);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,0.003890725);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,0.002013556);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,0.001211568);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,0.000428032);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,0.000683876);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,0.0003125427);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,0.0003035629);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,0.0002818015);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
