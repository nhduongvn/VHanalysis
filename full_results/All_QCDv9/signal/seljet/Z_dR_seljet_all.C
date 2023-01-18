#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,-23.04503,7.029799,168.9969);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(149.7927);
   
   TH1F *st_stack_276 = new TH1F("st_stack_276","",30,0,6);
   st_stack_276->SetMinimum(0);
   st_stack_276->SetMaximum(149.7927);
   st_stack_276->SetDirectory(0);
   st_stack_276->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_276->SetLineColor(ci);
   st_stack_276->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_276->GetXaxis()->SetRange(1,30);
   st_stack_276->GetXaxis()->SetLabelFont(42);
   st_stack_276->GetXaxis()->SetTitleOffset(1);
   st_stack_276->GetXaxis()->SetTitleFont(42);
   st_stack_276->GetYaxis()->SetTitle("Events/0.2");
   st_stack_276->GetYaxis()->SetLabelFont(42);
   st_stack_276->GetYaxis()->SetTitleSize(0.037);
   st_stack_276->GetYaxis()->SetTitleFont(42);
   st_stack_276->GetZaxis()->SetLabelFont(42);
   st_stack_276->GetZaxis()->SetTitleOffset(1);
   st_stack_276->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_276);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,0.01910014);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,17.76265);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,32.22121);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,34.59667);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,39.80328);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,44.30289);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,49.41089);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,53.47399);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,56.67053);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,61.20765);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,64.47833);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,69.30938);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,74.33561);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,79.91202);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,77.29555);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,35.86467);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,19.87867);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,12.03897);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,7.651926);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,5.279369);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,3.308937);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,2.290295);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,1.328901);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,0.7077656);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,0.3652032);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,0.1246854);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,0.03466671);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,0.002718425);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,0.006304327);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,0.1938722);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,0.2595879);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,0.2705784);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,0.2889049);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,0.3058367);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,0.3229577);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,0.3365015);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,0.3462237);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,0.3619913);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,0.3706315);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,0.3832457);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,0.3971799);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,0.4127653);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,0.4070554);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,0.2756685);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,0.2063451);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,0.1586977);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,0.1256614);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,0.1082432);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,0.08246768);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,0.06873922);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,0.05228386);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,0.0382677);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,0.02697921);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,0.01590664);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,0.008253648);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,0.001947789);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(490549);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,0.00256847);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,4.230474);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,7.667462);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,8.818193);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,10.47843);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,11.73746);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,12.59578);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,13.50611);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,14.39333);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,15.60194);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,16.58453);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,17.76123);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,18.82968);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,19.9498);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,19.55785);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,10.21621);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,6.064518);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,3.913296);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,2.53354);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,1.651503);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,1.067896);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,0.6705122);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,0.384095);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,0.209438);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,0.1033262);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,0.04335659);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,0.01067254);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,0.0006639273);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,0.0008169257);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,0.03547717);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,0.04718774);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,0.05077228);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,0.05516141);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,0.05868141);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,0.0607585);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,0.06282802);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,0.06496874);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,0.06780051);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,0.06973519);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,0.0719845);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,0.07414725);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,0.07626377);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,0.07554313);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,0.05444048);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,0.04202291);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,0.0337309);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,0.02704385);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,0.02187279);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,0.01762282);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,0.01400724);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,0.01041387);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,0.007751212);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,0.00545728);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,0.003468731);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,0.001782459);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,0.0003920801);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(908823);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}
