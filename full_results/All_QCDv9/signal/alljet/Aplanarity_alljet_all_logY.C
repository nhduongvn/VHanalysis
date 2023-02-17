#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_all/Aplanarity_alljet_all
//=========  (Thu Feb 16 10:37:21 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_all = new TCanvas("Aplanarity_alljet_all", "Aplanarity_alljet_all",0,0,600,600);
   Aplanarity_alljet_all->SetHighLightColor(2);
   Aplanarity_alljet_all->Range(-0.2183529,-0.2586288,1.171633,6.123748);
   Aplanarity_alljet_all->SetFillColor(0);
   Aplanarity_alljet_all->SetFillStyle(4000);
   Aplanarity_alljet_all->SetBorderMode(0);
   Aplanarity_alljet_all->SetBorderSize(2);
   Aplanarity_alljet_all->SetLogy();
   Aplanarity_alljet_all->SetLeftMargin(0.15709);
   Aplanarity_alljet_all->SetRightMargin(0.1234783);
   Aplanarity_alljet_all->SetBottomMargin(0.12);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(165867.1);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(3.215558);
   st_stack_256->SetMaximum(305851.1);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(1,1474.953);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(2,408.3112);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(3,225.3168);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(4,142.7091);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(5,97.80895);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(6,68.49834);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(7,48.6006);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(8,34.9068);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(9,25.40554);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(10,17.97039);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(11,12.81786);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(12,9.096158);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(13,6.323067);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(14,4.485606);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(15,2.854036);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(16,1.995006);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(17,1.129106);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(18,0.6604642);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(19,0.3925985);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(20,0.2569332);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(21,0.0861391);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(22,0.0349423);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(23,0.003850765);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(1,2.046105);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(2,1.057794);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(3,0.7974584);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(4,0.6281489);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(5,0.5241257);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(6,0.4284027);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(7,0.3732412);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(8,0.3121874);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(9,0.2827082);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(10,0.2200894);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(11,0.185598);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(12,0.1543248);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(13,0.1345085);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(14,0.1087533);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(15,0.09516294);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(16,0.07209566);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(17,0.05343049);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(18,0.04220063);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(19,0.03200601);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(20,0.03666805);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(21,0.01567295);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(22,0.008746186);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(23,0.002725419);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetEntries(1193419);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(1,183.7186);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(2,71.0671);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(3,40.23745);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(4,25.24524);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(5,16.40196);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(6,10.97546);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(7,7.442145);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(8,5.073129);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(9,3.51727);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(10,2.349382);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(11,1.617951);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(12,1.101314);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(13,0.7060004);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(14,0.4410075);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(15,0.2950923);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(16,0.1621958);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(17,0.09726407);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(18,0.05404103);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(19,0.03234333);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(20,0.01467588);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(21,0.004274325);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(22,0.002512131);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(23,0.0001893235);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(1,0.2521988);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(2,0.158289);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(3,0.1178794);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(4,0.09273517);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(5,0.07599994);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(6,0.06110065);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(7,0.04999386);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(8,0.04168398);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(9,0.03560925);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(10,0.02845484);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(11,0.02422433);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(12,0.0243991);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(13,0.01538596);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(14,0.01203158);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(15,0.00991709);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(16,0.007354085);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(17,0.006269351);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(18,0.004176859);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(19,0.003663027);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(20,0.002197868);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(21,0.001133097);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(22,0.0009600667);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(23,0.0001893235);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetEntries(1223268);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_alljet_all->Modified();
   Aplanarity_alljet_all->cd();
   Aplanarity_alljet_all->SetSelected(Aplanarity_alljet_all);
}
