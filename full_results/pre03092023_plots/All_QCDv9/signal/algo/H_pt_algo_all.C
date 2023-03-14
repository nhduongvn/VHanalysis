#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_all()
{
//=========Macro generated from canvas: H_pt_algo_all/H_pt_algo_all
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_all = new TCanvas("H_pt_algo_all", "H_pt_algo_all",0,0,600,600);
   H_pt_algo_all->SetHighLightColor(2);
   H_pt_algo_all->Range(37.97653,-0.2673491,1705.96,1.96056);
   H_pt_algo_all->SetFillColor(0);
   H_pt_algo_all->SetFillStyle(4000);
   H_pt_algo_all->SetBorderMode(0);
   H_pt_algo_all->SetBorderSize(2);
   H_pt_algo_all->SetLeftMargin(0.15709);
   H_pt_algo_all->SetRightMargin(0.1234783);
   H_pt_algo_all->SetBottomMargin(0.12);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.737769);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",40,0,2000);
   st_stack_80->SetMinimum(0);
   st_stack_80->SetMaximum(1.737769);
   st_stack_80->SetDirectory(0);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_80->GetXaxis()->SetRange(7,30);
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Events/50.0");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetTitleSize(0.037);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *VbbHcc_algo_H_pt_all_stack_1 = new TH1D("VbbHcc_algo_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(1,0.0596109);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(2,0.4786541);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(3,1.158513);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(4,1.06072);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(5,0.8016775);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(6,0.5122154);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(7,0.2707197);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(8,0.2121188);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(9,0.0867546);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(10,0.03105359);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(11,0.01601837);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(12,0.0114578);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(13,0.009446568);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(14,0.005361586);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(16,0.01223407);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(18,0.002840873);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(1,0.01173514);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(2,0.034024);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(3,0.05477484);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(4,0.05129164);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(5,0.05916027);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(6,0.03698581);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(7,0.02574274);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(8,0.02321809);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(9,0.01571183);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(10,0.008621019);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(11,0.006652241);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(12,0.005290018);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(13,0.004797001);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(14,0.003096431);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(16,0.007595962);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(18,0.002840873);
   VbbHcc_algo_H_pt_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_2 = new TH1D("VbbHcc_algo_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(1,0.01542983);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(2,0.1085045);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(3,0.4085756);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(4,0.4909123);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(5,0.3198485);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(6,0.173261);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(7,0.07555754);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(8,0.04059758);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(9,0.01748747);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(10,0.005464315);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(11,0.002285686);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(12,0.0003961915);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(13,0.0005044512);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(1,0.002204931);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(2,0.005960993);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(3,0.01149415);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(4,0.01318848);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(5,0.01027908);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(6,0.007463354);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(7,0.005563551);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(8,0.003708058);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(9,0.002380557);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(10,0.001316474);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(11,0.0008303022);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(12,0.0003961915);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(13,0.0003569464);
   VbbHcc_algo_H_pt_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_algo_all->Modified();
   H_pt_algo_all->cd();
   H_pt_algo_all->SetSelected(H_pt_algo_all);
}
