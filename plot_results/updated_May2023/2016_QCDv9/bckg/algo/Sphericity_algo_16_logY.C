#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu May 25 11:56:11 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.3376275,1.171633,6.516034);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15709);
   Sphericity_algo_16->SetRightMargin(0.1234783);
   Sphericity_algo_16->SetBottomMargin(0.12);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(354527.8);
   
   TH1F *st_stack_39 = new TH1F("st_stack_39","",25,0,1);
   st_stack_39->SetMinimum(3.053598);
   st_stack_39->SetMaximum(677123.3);
   st_stack_39->SetDirectory(0);
   st_stack_39->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_39->SetLineColor(ci);
   st_stack_39->GetXaxis()->SetTitle("Sphericity");
   st_stack_39->GetXaxis()->SetRange(1,25);
   st_stack_39->GetXaxis()->SetLabelFont(42);
   st_stack_39->GetXaxis()->SetTitleOffset(1);
   st_stack_39->GetXaxis()->SetTitleFont(42);
   st_stack_39->GetYaxis()->SetTitle("Event/0.04");
   st_stack_39->GetYaxis()->SetLabelFont(42);
   st_stack_39->GetYaxis()->SetTitleSize(0.037);
   st_stack_39->GetYaxis()->SetTitleFont(42);
   st_stack_39->GetZaxis()->SetLabelFont(42);
   st_stack_39->GetZaxis()->SetTitleOffset(1);
   st_stack_39->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_39);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,277144.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,279195.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,143346.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,86878.52);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,40122.53);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,16227.85);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,5479.845);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,2106.585);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,409.1926);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,695.8382);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,54.20772);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,5.95971);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,5.96092);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,2.066338);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,6.579398);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.991057);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,12249.88);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,25578.37);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,9095.546);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,20368.1);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,4985.152);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3348.98);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,1937.326);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,1523.22);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,340.9139);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,438.3537);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,29.79941);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,5.95971);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,5.96092);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,2.066338);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,6.579398);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.991057);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(22576);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,13966.85);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,15062.22);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,8128.78);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,4282.887);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,2231.713);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,1086.447);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,506.935);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,252.1266);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,130.5363);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,73.93623);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,44.53661);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,29.61501);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,19.82998);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,11.54943);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,7.884598);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,5.881028);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,3.331647);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,2.414784);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,1.666172);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.3374191);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.3756488);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,30.20048);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,31.58537);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,23.20679);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,16.83484);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,12.10905);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,8.389059);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,5.671351);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.948899);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.796876);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,2.069185);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.601501);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.294971);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,1.056111);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.7909708);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6475999);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.5677883);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4178003);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.3735608);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.3132747);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.1389161);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.1494547);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(746055);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
