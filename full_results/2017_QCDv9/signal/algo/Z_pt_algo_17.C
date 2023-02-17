#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_17()
{
//=========Macro generated from canvas: Z_pt_algo_17/Z_pt_algo_17
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_17 = new TCanvas("Z_pt_algo_17", "Z_pt_algo_17",0,0,600,600);
   Z_pt_algo_17->SetHighLightColor(2);
   Z_pt_algo_17->Range(37.97653,-0.1019147,1705.96,0.7473745);
   Z_pt_algo_17->SetFillColor(0);
   Z_pt_algo_17->SetFillStyle(4000);
   Z_pt_algo_17->SetBorderMode(0);
   Z_pt_algo_17->SetBorderSize(2);
   Z_pt_algo_17->SetLeftMargin(0.15709);
   Z_pt_algo_17->SetRightMargin(0.1234783);
   Z_pt_algo_17->SetBottomMargin(0.12);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6624456);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",40,0,2000);
   st_stack_74->SetMinimum(0);
   st_stack_74->SetMaximum(0.6624456);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_74->GetXaxis()->SetRange(7,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/50.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.0430717);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.180915);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.4416304);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.3513289);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.2423949);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.1373312);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.06272112);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.05196804);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.01791899);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.004016422);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.004176385);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.003739981);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.001753361);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(14,0.001848645);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.008862784);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.0183183);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.02934165);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.02578267);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02136771);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01639393);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01093138);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.009608695);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.006404843);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.002840039);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.002989405);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.002649171);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.001753361);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(14,0.001848645);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.008641658);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.05346135);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.1959551);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.1502714);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.08303964);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.03924816);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.01426697);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.009428533);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.002044007);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.0003050762);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.000262908);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.0005044512);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.001425882);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.003628099);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.006900444);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.006000904);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.004481075);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.003031736);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.001843988);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.00152625);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0006584358);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.000267256);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.000262908);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0003569464);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_17->Modified();
   Z_pt_algo_17->cd();
   Z_pt_algo_17->SetSelected(Z_pt_algo_17);
}
