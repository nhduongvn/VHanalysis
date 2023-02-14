#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.310117,-0.06474564,7.029799,0.4748013);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(40.08063);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(-3.126434e+09);
   st_stack_85->SetMaximum(-27.23131);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.0329952);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.06483651);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.1810251);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.2182125);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.2559537);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.2925379);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.3260649);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.2081012);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.1790627);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.1791243);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.110043);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.05422986);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.07846498);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.04527472);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.02440575);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.01231775);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.002965697);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.009960112);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01494081);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.02308654);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.02585985);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02791959);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.02995162);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.03114745);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.02542266);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.02373979);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.02310249);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01814403);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.0126215);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.01499582);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01148333);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.00863731);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.006163533);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002965697);
   VbbHcc_algo_H_dR_stack_1->SetEntries(804);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.005908321);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.0189407);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.04433676);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.07260337);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1021601);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.1016819);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.07474138);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.05485678);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.03547484);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.02951813);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.01721484);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.01269668);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01386413);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.01265605);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.005986288);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.001132277);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001957278);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0006850578);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0004148414);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001484399);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002663757);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.004114012);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.005271865);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.006256646);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.006266508);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.005382407);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.004613149);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.003699828);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.003394581);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.002578973);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.002194196);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.002299121);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.002195743);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001517972);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0006539083);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0008456495);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0004845067);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0004148414);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1609);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
