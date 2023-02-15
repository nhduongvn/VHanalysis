#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_18/Aplanarity_alljet_18
//=========  (Tue Feb 14 16:02:05 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_18 = new TCanvas("Aplanarity_alljet_18", "Aplanarity_alljet_18",0,0,600,600);
   Aplanarity_alljet_18->SetHighLightColor(2);
   Aplanarity_alljet_18->Range(-0.2183529,-2.118242,1.171633,16.546);
   Aplanarity_alljet_18->SetFillColor(0);
   Aplanarity_alljet_18->SetFillStyle(4000);
   Aplanarity_alljet_18->SetBorderMode(0);
   Aplanarity_alljet_18->SetBorderSize(2);
   Aplanarity_alljet_18->SetLogy();
   Aplanarity_alljet_18->SetLeftMargin(0.15709);
   Aplanarity_alljet_18->SetRightMargin(0.1234783);
   Aplanarity_alljet_18->SetBottomMargin(0.12);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.319419e+14);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(1.322718);
   st_stack_255->SetMaximum(4.781674e+14);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,147769);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,1.319394e+12);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,9.974584e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,3.602879e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.736599e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,9.614016e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,5.744172e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,3.582645e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,2.312472e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,1.513822e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,9.962955e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,6.636468e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,4.387525e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.852054e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.882908e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,1.205412e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,7.471349e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,4.535453e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,2.518926e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,1.29088e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,6855967);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,2761145);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,887105.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,240217.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,467.4069);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(25,42.64568);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,62984.54);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.866074e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,5.186188e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,3.142948e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,2.228043e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.617879e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,1.26342e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,9832371);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,8051756);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,6598207);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,5238527);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,4188064);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,3411740);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,2739878);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,2222750);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1831590);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,1378475);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,1130760);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,853614.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,567693.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,406130.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,264655);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,147820.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,75847.56);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,392.2381);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(25,42.64568);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(2.385138e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,2.560788);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,2.423201e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,1.002781e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,5929761);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,3885137);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,2673102);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1888570);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,1355007);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,978253.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,707503.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,510195.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,365506.2);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,259036.5);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,180649.2);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,123908.9);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,82769.34);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,53678.07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,33375.04);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,19709.84);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,10949.51);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,5473.109);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,2449.779);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,898.5656);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,246.2298);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,34.05366);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,1.092226);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.448838);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,1464.776);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,951.5465);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,732.815);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,595.1058);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,493.6216);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,415.8051);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,352.192);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,299.3499);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,254.7543);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,216.4569);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,182.9892);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,155.2954);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,128.8071);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,106.7004);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,87.86036);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,70.1955);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,55.48268);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,42.35209);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,31.73877);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,22.49635);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,14.58737);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,8.921048);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,4.639829);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.629033);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2896297);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(7.560581e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_18->Modified();
   Aplanarity_alljet_18->cd();
   Aplanarity_alljet_18->SetSelected(Aplanarity_alljet_18);
}
