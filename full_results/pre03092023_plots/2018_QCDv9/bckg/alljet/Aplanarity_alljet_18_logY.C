#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_18/Aplanarity_alljet_18
//=========  (Thu Feb 16 10:37:42 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_18 = new TCanvas("Aplanarity_alljet_18", "Aplanarity_alljet_18",0,0,600,600);
   Aplanarity_alljet_18->SetHighLightColor(2);
   Aplanarity_alljet_18->Range(-0.2183529,-2.118243,1.171633,16.54601);
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
   st->SetMaximum(1.31943e+14);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(1.322718);
   st_stack_255->SetMaximum(4.781717e+14);
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
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,149261.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,1.319406e+12);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,9.975888e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,3.602376e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.736001e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,9.609167e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,5.740099e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,3.582726e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,2.313717e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,1.509966e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,9.966172e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,6.654203e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,4.386862e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.848844e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.883399e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,1.200724e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,7.419504e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,4.534944e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,2.513849e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,1.331671e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,6903000);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,2792276);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,855090.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,234494.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,499.4537);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(25,35.44002);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,61765.18);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.846038e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,5.127222e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,3.10702e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,2.203832e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.599224e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,1.248493e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,9730146);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,7969940);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,6497958);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,5177192);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,4150646);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,3370422);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,2707988);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,2198700);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1816796);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,1355331);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,1117432);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,841305.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,601431.2);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,403547.2);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,264487.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,143331.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,74258.68);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,402.4802);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(25,35.44002);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(2.570898e+08);

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
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,2.379995);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,2.423185e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,1.002759e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,5929561);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,3885262);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,2673332);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1888431);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,1354799);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,978254.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,707483.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,510203.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,365539.2);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,259072.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,180671.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,123871.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,82761.43);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,53625.67);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,33352.87);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,19716.87);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,10947.67);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,5484.31);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,2449.09);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,898.7479);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,244.558);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,34.90338);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,1.066085);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.4217057);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,1434.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,931.5827);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,717.2436);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,582.2911);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,483.125);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,406.8023);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,344.6375);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,292.7483);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,249.168);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,211.4644);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,179.0408);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,152.2982);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,126.0264);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,104.5067);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,85.82286);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,68.69937);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,54.1069);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,41.58548);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,31.13733);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,22.11948);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,14.21618);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,8.739373);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,4.521544);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.629908);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2820792);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(7.847364e+08);

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
