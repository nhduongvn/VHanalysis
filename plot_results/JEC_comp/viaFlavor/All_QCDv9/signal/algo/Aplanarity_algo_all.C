#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-0.3162754,1.171633,2.319353);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.05579);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",50,0,1);
   st_stack_160->SetMinimum(0);
   st_stack_160->SetMaximum(2.05579);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetTitle("Aplanarity");
   st_stack_160->GetXaxis()->SetRange(1,50);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetTitleOffset(1);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Event/0.02");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetTitleSize(0.037);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetTitleOffset(1);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1.29067);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,0.268153);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,0.1058841);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,0.03888169);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,0.02261939);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,0.00765332);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,0.002532203);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,0.007473573);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,0.006823901);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,0.001245675);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,0.06893661);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,0.02603008);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,0.01631459);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,0.009752739);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,0.008745436);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,0.004950843);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,0.002532203);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,0.004427983);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,0.00399448);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,0.001245675);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,0.4156354);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,0.1226661);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,0.02967652);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,0.01375221);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,0.006059568);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,0.005215832);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,0.002746886);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.001927117);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.001639238);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,0.0005417733);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.000594073);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.0002638256);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.0003100168);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,0.01200993);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,0.006252214);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,0.003065244);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,0.002084245);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,0.001404499);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.001414308);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.0009628995);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.0007551572);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.0007411715);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.000383352);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.0003520995);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.0002638256);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.0003100168);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
