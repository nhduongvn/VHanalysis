#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Mon Mar 20 11:50:03 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2183529,-0.1298689,1.171633,0.9523717);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15709);
   Sphericity_algo_17->SetRightMargin(0.1234783);
   Sphericity_algo_17->SetBottomMargin(0.12);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.8441476);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0);
   st_stack_154->SetMaximum(0.8441476);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetTitle("Sphericity");
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetTitleOffset(1);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Event/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetTitleSize(0.037);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetTitleOffset(1);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.4747512);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.5161126);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.2293564);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.1596603);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1098678);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.04165331);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.007871439);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.001495022);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.004047012);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.02978285);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.03113368);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.02182052);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01726245);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01472406);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.008669925);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.003952299);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.001495022);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.0028656);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.1680146);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.18453);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.09261317);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.05601345);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.03403501);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.01208912);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.00647693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.002304704);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.0002373499);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.0004314007);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.0004417738);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.0002417912);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.006350443);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.00668939);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.004739003);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.00368107);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002860661);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.00169323);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001238846);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.0007396635);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.0002373499);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.0003109098);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.0003125427);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0002417912);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
