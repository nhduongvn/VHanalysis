#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2183529,-0.05394308,1.171633,0.3955826);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15709);
   Sphericity_algo_18->SetRightMargin(0.1234783);
   Sphericity_algo_18->SetBottomMargin(0.12);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.35063);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0);
   st_stack_155->SetMaximum(0.35063);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetTitle("Sphericity");
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetTitleOffset(1);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Event/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetTitleSize(0.037);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetTitleOffset(1);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.02281387);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.1154286);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.2000421);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.2236397);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1792263);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.04271466);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.02704456);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.002231337);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.007911413);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.008378001);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.005750571);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.007866888);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01748133);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.0238744);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.02505422);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.04429604);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01044512);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.008208901);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.002231337);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.004577352);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.004865509);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.004104956);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(320);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.0103782);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.04539398);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.06261586);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.06738326);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.05185827);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.02241953);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.006452081);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.003369436);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.001342087);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.002480368);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.0007247556);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.002001663);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.001215165);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.0004291122);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.0007149824);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.0003334233);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.001909667);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.004023757);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.004674633);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.004976647);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.005283988);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002760418);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001553611);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.001085479);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.0006727155);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.0009437387);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.0005215738);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.0009063369);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.0007086113);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.0003384403);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0004607294);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.0003334233);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(817);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
