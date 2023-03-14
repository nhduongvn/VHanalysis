#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_all_logY()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(-0.2183529,-0.3964679,1.171633,6.81223);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(629712.4);
   
   TH1F *st_stack_124 = new TH1F("st_stack_124","",25,0,1);
   st_stack_124->SetMinimum(2.941548);
   st_stack_124->SetMaximum(1234128);
   st_stack_124->SetDirectory(0);
   st_stack_124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_124->SetLineColor(ci);
   st_stack_124->GetXaxis()->SetTitle("Sphericity");
   st_stack_124->GetXaxis()->SetRange(1,25);
   st_stack_124->GetXaxis()->SetLabelFont(42);
   st_stack_124->GetXaxis()->SetTitleOffset(1);
   st_stack_124->GetXaxis()->SetTitleFont(42);
   st_stack_124->GetYaxis()->SetTitle("Event/0.04");
   st_stack_124->GetYaxis()->SetLabelFont(42);
   st_stack_124->GetYaxis()->SetTitleSize(0.037);
   st_stack_124->GetYaxis()->SetTitleFont(42);
   st_stack_124->GetZaxis()->SetLabelFont(42);
   st_stack_124->GetZaxis()->SetTitleOffset(1);
   st_stack_124->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_124);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,205150.3);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,507935.4);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,497500.5);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,433361.7);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,354377.5);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,407073.8);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,228016.2);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,200316.8);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,181912.9);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,137551.7);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,126452.2);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,93083.71);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,86384.94);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,71400.18);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,60667.81);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,44418.67);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,52055.32);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,23539.6);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(19,10654.27);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(20,5278.365);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(21,13383.16);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(22,333.1156);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,9526.577);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,25686.18);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,27660.15);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,36839.13);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,36103.29);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,56690.97);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,13101.09);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,24550.7);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,21572.31);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,9443.438);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,10111.76);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,7999.396);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,8730.824);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,7497.286);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,6537.159);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,6028.633);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,29961.27);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,4601.246);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(19,2219.699);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(20,2243.103);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(21,11541.13);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(22,320.1414);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,5124.547);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,14725.94);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,18707.9);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,18881.68);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,17858.91);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,16458.8);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,15089.75);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,13780.48);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,12576.23);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,11504.56);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,10503.62);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,9464.452);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,8553.785);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,7675.033);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,6662.957);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,5677.11);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,4628.922);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,3494.608);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,2348.253);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(20,1255.913);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(21,563.2966);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(22,208.1747);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(23,56.96941);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(24,8.371187);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(25,0.1924085);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,18.9446);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,32.43374);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,37.31467);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,37.38747);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,36.59661);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,35.16338);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,33.76025);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,32.39573);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,30.66468);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,29.26765);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,28.41679);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,26.94937);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,25.5877);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,24.44886);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,22.42325);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,20.65909);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,18.78434);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,16.29048);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,13.51676);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(20,9.790942);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(21,6.539885);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(22,3.934569);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(23,2.08814);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(24,0.7970838);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(25,0.1144473);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
