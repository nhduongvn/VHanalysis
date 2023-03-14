#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_18_logY()
{
//=========Macro generated from canvas: H_pt_algo_18/H_pt_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_18 = new TCanvas("H_pt_algo_18", "H_pt_algo_18",0,0,600,600);
   H_pt_algo_18->SetHighLightColor(2);
   H_pt_algo_18->Range(-436.7058,-0.08764804,2343.266,0.6427523);
   H_pt_algo_18->SetFillColor(0);
   H_pt_algo_18->SetFillStyle(4000);
   H_pt_algo_18->SetBorderMode(0);
   H_pt_algo_18->SetBorderSize(2);
   H_pt_algo_18->SetLogy();
   H_pt_algo_18->SetLeftMargin(0.15709);
   H_pt_algo_18->SetRightMargin(0.1234783);
   H_pt_algo_18->SetBottomMargin(0.12);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",40,0,2000);
   st_stack_79->SetMinimum(-2.237463e+09);
   st_stack_79->SetMaximum(-0.1367808);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_79->GetXaxis()->SetRange(7,30);
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetTitleOffset(1);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Event/50.0");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetTitleOffset(1);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.01976273);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.1896653);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.3704264);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.3751415);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.2741711);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.1910983);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.08653647);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.08923523);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.02553759);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.006114219);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.009508646);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.005503323);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.001782366);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(16,0.009096468);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(18,0.002112291);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.006052262);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.01928785);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.02780864);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.02741951);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.03738188);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.02049214);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.01311896);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01344811);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.007507631);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.003571019);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.004324012);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.003279676);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.001782366);
   VbbHcc_algo_H_pt_stack_1->SetBinError(16,0.005647871);
   VbbHcc_algo_H_pt_stack_1->SetBinError(18,0.002112291);
   VbbHcc_algo_H_pt_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.005474762);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.0387295);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.1419724);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.1674416);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.102471);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.06228169);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.02862413);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.01582721);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.005643522);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.00220126);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0004223814);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.001179318);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.003209398);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.00612378);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.007257255);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.005353528);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.00405211);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.003346506);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.002157681);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001233261);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.000740901);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0003044259);
   VbbHcc_algo_H_pt_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_18->Modified();
   H_pt_algo_18->cd();
   H_pt_algo_18->SetSelected(H_pt_algo_18);
}
