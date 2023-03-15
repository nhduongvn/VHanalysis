#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_16_logY()
{
//=========Macro generated from canvas: H_pt_algo_16/H_pt_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_16 = new TCanvas("H_pt_algo_16", "H_pt_algo_16",0,0,600,600);
   H_pt_algo_16->SetHighLightColor(2);
   H_pt_algo_16->Range(-436.7058,-0.0443778,2343.266,0.3254372);
   H_pt_algo_16->SetFillColor(0);
   H_pt_algo_16->SetFillStyle(4000);
   H_pt_algo_16->SetBorderMode(0);
   H_pt_algo_16->SetBorderSize(2);
   H_pt_algo_16->SetLogy();
   H_pt_algo_16->SetLeftMargin(0.15709);
   H_pt_algo_16->SetRightMargin(0.1234783);
   H_pt_algo_16->SetBottomMargin(0.12);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",40,0,2000);
   st_stack_77->SetMinimum(-2.159754e+09);
   st_stack_77->SetMaximum(-0.06875624);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_77->GetXaxis()->SetRange(7,30);
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetTitleOffset(1);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Event/50.0");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetTitleOffset(1);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.007069404);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.05223774);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.2166145);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.1517521);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.1078929);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.07609246);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.04474513);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.02555586);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.01588794);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.008035251);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.002396092);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.002249983);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.004083638);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.0105608);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.02205725);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.01823131);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.01523803);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.01307713);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.009950043);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.007440739);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.006722145);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.00406867);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.002396092);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.002249983);
   VbbHcc_algo_H_pt_stack_1->SetEntries(339);

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
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.002239957);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.01652312);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.05810516);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.07653153);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.05094299);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.0245216);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.01016924);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.004032076);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.002800541);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.0005518139);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0005589193);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.0002939085);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.0007939059);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.002162838);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.004089853);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.004665528);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.003795687);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.002644954);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.001703056);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.001065819);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.0008911908);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0003901919);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0003952177);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.0002939085);
   VbbHcc_algo_H_pt_stack_2->SetEntries(884);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_16->Modified();
   H_pt_algo_16->cd();
   H_pt_algo_16->SetSelected(H_pt_algo_16);
}
