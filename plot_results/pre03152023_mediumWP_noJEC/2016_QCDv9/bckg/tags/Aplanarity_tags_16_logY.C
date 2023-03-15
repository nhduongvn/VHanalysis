#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Mar  9 13:18:01 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-0.5643423,1.171633,7.674934);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3370116);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(2.656873);
   st_stack_61->SetMaximum(7095878);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Event/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2565646);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1264559);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,592423.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,353585.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,228496.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,126010.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,74122.99);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,58143.63);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,35245.51);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,22526.72);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,12364.62);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,7013.876);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,7837.072);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,3584.18);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,3101.77);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,1483.538);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,121.8126);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,1152.855);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,67.30862);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,304.9679);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,39202.16);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,51316.05);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,17632.67);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,26262.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,23984.14);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,7939.324);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,5931.766);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,5880.841);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,4242.148);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,3842.394);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,2498.985);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,1210.999);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,1984.373);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,907.3144);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,893.286);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,600.4375);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,43.91755);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,1054.987);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,29.95577);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,291.907);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(247451);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.06515573);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,231550.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,165656.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,110089.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,74877.22);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,52152.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,37169.79);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,26588.99);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,19243.15);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,13957.56);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,10083.45);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,7228.529);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,5127.447);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,3587.577);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,2466.544);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,1645.365);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,1075.107);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,664.745);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,399.7256);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,215.0322);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,108.7627);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,48.50628);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,19.0832);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,4.412318);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,0.3765654);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.07709436);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.05542727);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,126.2381);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,107.2654);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,87.63439);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,72.37857);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,60.48221);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,51.10538);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,43.24778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,36.80913);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,31.3754);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,26.66887);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,22.59107);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,19.04061);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,15.92701);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,13.20896);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,10.801);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,8.729766);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,6.869417);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,5.320668);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,3.905811);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,2.784044);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,1.859619);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.159916);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.5646285);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.1476049);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.07709436);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(1.175949e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
