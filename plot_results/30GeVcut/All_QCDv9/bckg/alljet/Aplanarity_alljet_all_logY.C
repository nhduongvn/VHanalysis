#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_all/Aplanarity_alljet_all
//=========  (Tue Feb 14 16:02:05 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_all = new TCanvas("Aplanarity_alljet_all", "Aplanarity_alljet_all",0,0,600,600);
   Aplanarity_alljet_all->SetHighLightColor(2);
   Aplanarity_alljet_all->Range(-0.2183529,-2.183718,1.171633,16.94471);
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
   st->SetMaximum(2.914094e+14);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(1.293284);
   st_stack_256->SetMaximum(1.076146e+15);
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
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(0,198607.3);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(1,2.914041e+12);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(2,2.28343e+11);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(3,8.366308e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(4,4.059168e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(5,2.249891e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(6,1.343275e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(7,8.395675e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(8,5.395868e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(9,3.535293e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(10,2.329881e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(11,1.536773e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(12,1.014247e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(13,6.675467e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(14,4.33634e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(15,2.766183e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(16,1.729442e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(17,1.048372e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(18,5.727382e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(19,2.992689e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(20,1.59542e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(21,6329033);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(22,2163683);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(23,688263.3);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(24,27330.23);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(25,42.64568);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(0,66930.24);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(1,2.551621e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(2,7.135999e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(3,4.332902e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(4,3.050348e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(5,2.24235e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(6,1.742637e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(7,1.36741e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(8,1.107786e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(9,9029555);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(10,7246619);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(11,5825754);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(12,4738770);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(13,3835947);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(14,3089225);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(15,2512496);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(16,1939311);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(17,1551982);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(18,1153129);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(19,801229);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(20,582046.2);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(21,369984.4);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(22,211931.9);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(23,119180.6);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(24,19750.94);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(25,42.64568);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetEntries(6.836464e+08);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(0,5.612916);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(1,5.339303e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(2,2.245983e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(3,1.335941e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(4,8774669);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(5,6045555);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(6,4275003);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(7,3067759);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(8,2215477);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(9,1602872);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(10,1156140);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(11,828053.8);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(12,586819.4);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(13,409655.7);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(14,280705.5);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(15,187324.7);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(16,121419.8);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(17,75573.69);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(18,44589.52);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(19,24710.22);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(20,12430.18);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(21,5525.992);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(22,2035.148);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(23,549.1549);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(24,84.00582);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(25,2.767149);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(0,0.6325688);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(1,2004.925);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(2,1316.577);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(3,1018.243);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(4,827.3873);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(5,687.1354);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(6,578.6705);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(7,490.3387);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(8,416.834);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(9,354.7436);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(10,301.4036);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(11,254.9654);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(12,215.5466);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(13,179.4727);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(14,148.5991);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(15,121.878);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(16,97.74661);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(17,77.19928);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(18,59.10102);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(19,44.13238);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(20,31.32629);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(21,20.5655);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(22,12.53344);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(23,6.498584);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(24,2.477581);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(25,0.4411466);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetEntries(1.849221e+09);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_all->Modified();
   Aplanarity_alljet_all->cd();
   Aplanarity_alljet_all->SetSelected(Aplanarity_alljet_all);
}
