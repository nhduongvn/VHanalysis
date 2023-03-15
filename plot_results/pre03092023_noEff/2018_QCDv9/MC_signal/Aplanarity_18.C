#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_18()
{
//=========Macro generated from canvas: Aplanarity_18/Aplanarity_18
//=========  (Thu Feb 16 13:12:22 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_18 = new TCanvas("Aplanarity_18", "Aplanarity_18",0,0,600,600);
   Aplanarity_18->SetHighLightColor(2);
   Aplanarity_18->Range(-0.2183529,-26.3296,1.171633,193.0837);
   Aplanarity_18->SetFillColor(0);
   Aplanarity_18->SetFillStyle(4000);
   Aplanarity_18->SetBorderMode(0);
   Aplanarity_18->SetBorderSize(2);
   Aplanarity_18->SetLeftMargin(0.15709);
   Aplanarity_18->SetRightMargin(0.1234783);
   Aplanarity_18->SetBottomMargin(0.12);
   Aplanarity_18->SetFrameFillStyle(1000);
   Aplanarity_18->SetFrameBorderMode(0);
   Aplanarity_18->SetFrameFillStyle(1000);
   Aplanarity_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_71 = new TH1F("st_stack_71","",50,0,1);
   st_stack_71->SetMinimum(0);
   st_stack_71->SetMaximum(171.1424);
   st_stack_71->SetDirectory(0);
   st_stack_71->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_71->SetLineColor(ci);
   st_stack_71->GetXaxis()->SetTitle("Aplanarity");
   st_stack_71->GetXaxis()->SetRange(1,50);
   st_stack_71->GetXaxis()->SetLabelFont(42);
   st_stack_71->GetXaxis()->SetTitleOffset(1);
   st_stack_71->GetXaxis()->SetTitleFont(42);
   st_stack_71->GetYaxis()->SetTitle("Events/0.02");
   st_stack_71->GetYaxis()->SetLabelFont(42);
   st_stack_71->GetYaxis()->SetTitleSize(0.037);
   st_stack_71->GetYaxis()->SetTitleFont(42);
   st_stack_71->GetZaxis()->SetLabelFont(42);
   st_stack_71->GetZaxis()->SetTitleOffset(1);
   st_stack_71->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_71);
   
   
   TH1D *VbbHcc_MC_Aplanarity_stack_1 = new TH1D("VbbHcc_MC_Aplanarity_stack_1","",50,0,1);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(1,146.9);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(2,40.43797);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(3,23.57447);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(4,15.67564);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(5,10.51493);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(6,7.838961);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(7,5.518287);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(8,4.086798);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(9,2.975624);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(10,2.13792);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(11,1.538994);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(12,1.145708);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(13,0.804789);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(14,0.6137619);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(15,0.3280105);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(16,0.2256929);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(17,0.1255486);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(18,0.09088929);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(19,0.04208424);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(20,0.01877898);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(21,0.01422652);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(1,0.6924342);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(2,0.3691917);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(3,0.2745653);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(4,0.2227395);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(5,0.1781009);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(6,0.1615971);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(7,0.131836);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(8,0.1087846);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(9,0.09179263);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(10,0.08054749);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(11,0.06661068);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(12,0.05617278);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(13,0.04707127);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(14,0.04171679);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(15,0.03017022);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(16,0.02455991);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(17,0.01835445);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(18,0.01615521);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(19,0.01061648);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(20,0.006781737);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(21,0.005810629);
   VbbHcc_MC_Aplanarity_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_MC_Aplanarity_stack_2 = new TH1D("VbbHcc_MC_Aplanarity_stack_2","",50,0,1);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(1,16.09272);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(2,7.355425);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(3,4.358126);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(4,2.952593);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(5,1.975545);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(6,1.350289);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(7,0.9094701);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(8,0.6430193);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(9,0.4292112);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(10,0.294903);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(11,0.1994457);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(12,0.1162186);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(13,0.07653335);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(14,0.04923953);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(15,0.02934385);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(16,0.01494037);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(17,0.006231919);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(18,0.007180748);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(19,0.002831121);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(20,0.0004390761);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(21,0.001099549);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(22,0.0006987902);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(1,0.08046425);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(2,0.05918354);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(3,0.04048356);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(4,0.03324827);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(5,0.02755423);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(6,0.02699214);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(7,0.01886747);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(8,0.0169807);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(9,0.01318326);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(10,0.01042741);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(11,0.009244528);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(12,0.006483604);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(13,0.005548226);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(14,0.004223371);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(15,0.003261099);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(16,0.002232149);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(17,0.001486969);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(18,0.00168615);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(19,0.001170878);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(20,0.0002576946);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(21,0.0006411366);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(22,0.0005003337);
   VbbHcc_MC_Aplanarity_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_18->Modified();
   Aplanarity_18->cd();
   Aplanarity_18->SetSelected(Aplanarity_18);
}
